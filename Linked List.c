#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int number;
    struct Node *ptr;
};
typedef struct Node List;
List *insertbeg(List *head)
{
    List *temp;
    temp = (List *)malloc(sizeof(List *));
    if (temp == NULL)
    {
        printf("Space not allocated");
        exit(1);
    }
    printf("Enter Data: ");
    scanf("%d", &temp->number);
    temp->ptr = NULL;
    if (head == NULL)
        head = temp;
    else    
    {
        temp->ptr = head;
        head = temp;
    }
    return head;
}
void display(List *head)
{
    List *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->number);
        temp = temp->ptr;
    }
}
void insertend(List *head)
{
    List *temphead = head;
    while (temphead->ptr != NULL)
        temphead = temphead->ptr;
    List *temp;
    temp = (List *)malloc(sizeof(List *));
    if (temp == NULL)
    {
        printf("Space not allocated");
        exit(1);
    }
    printf("Enter Data: ");
    scanf("%d", &temp->number);
    temp->ptr = NULL;
    temphead->ptr = temp;
}
void insertspecific(List *head)
{
    List *count = head;
    int i, k = 1;
    while (count != NULL)
    {
        count = count->ptr;
        k++;
    }
    do
    {
        printf("Enter a Valid position to insert data at: ");
        scanf("%d", &i);
    } while (i > k && i <= 0);
    count = head;
    for (int j = 0; j <= i; j++)
        count = count->ptr;
    List *temp;
    temp = (List *)malloc(sizeof(List *));
    if (temp == NULL)
    {
        printf("Space not allocated");
        exit(1);
    }
    printf("Enter Data: ");
    scanf("%d", &temp->number);
    temp->ptr = count->ptr;
    count->ptr = temp;
}
List *removebeg(List *head)
{
    List *temp = head;
    head = head->ptr;
    free(temp);
    return head;
}
void removeend(List *head)
{
    List *temp = head;
    while (temp->ptr->ptr != NULL)
        temp = temp->ptr;
    List *temp1 = temp->ptr;
    temp->ptr = NULL;
    free(temp1);
}
void removespecific(List *head)
{
    List *count = head;
    int i, k = 1;
    while (count != NULL)
    {
        count = count->ptr;
        k++;
    }
    do
    {
        printf("Enter a Valid position to delete data from: ");
        scanf("%d", &i);
    } while (i > k && i <= 0);
    count = head;
    for (int j = 0; j < i; j++)
        count = count->ptr;
    List *temp = count->ptr;
    count->ptr = count->ptr->ptr;
    free(temp);
}
int main()
{
    List *head = NULL;
    int choice;
    do
    {
        printf("1. Insert in Begining\n2. Print\n3. Insert at End\n4. Insert at Specific Position\n5. Delete from Begining\n6. Delete from End\n7. Delete at Specific Position\n8. Exit\nEnter Option: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = insertbeg(head);
            break;
        case 2:
            display(head);
            break;
        case 3:
            insertend(head);
            break;
        case 4:
            insertspecific(head);
            break;
        case 5:
            head = removebeg(head);
            break;
        case 6:
            removeend(head);
            break;
        case 7:
            removespecific(head);
            break;
        case 8:
            break;
        default:
            printf("Wrong Choice...\n");
        }
    } while (choice != 8);
}