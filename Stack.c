#include <stdlib.h>
#include <stdio.h>
#define maxSize 7
int Stack[maxSize];
void Push(int Stack[], int *top, int value)
{
    if (*top == maxSize - 1)
        printf("Stack is full\n");
    else
        Stack[++*top] = value;
}
void Pop(int Stack[], int *top)
{
    if (*top < 0)
        printf("Stack is empty\n");
    else
        printf("Element Popped is: %d\n", Stack[(*top)--]);
}
void Print(int Stack[], int top)
{
    if (top < 0)
        printf("Stack is empty\n");
    else
    {
        printf("\nThe Stack:\n");
        while (top >= 0)
            printf("%d\t", Stack[top--]);
        printf("\n");
    }
}
int main()
{
    int choice, top = -1;
    do
    {
        printf("1. Push\n2. Pop\n3. Print\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            int value;
            printf("Enter value to be pushed into the stack: ");
            scanf("%d", &value);
            Push(Stack, &top, value);
            break;
        case 2:
            Pop(Stack, &top);
            break;
        case 3:
            Print(Stack, top);
            break;
        case 4:
            break;
        default:
            printf("Wrong Choice...\nTry Again...\n");
        }
    } while (choice != 4);
}