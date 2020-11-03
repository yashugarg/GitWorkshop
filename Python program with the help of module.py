import circle
import rectangle
import square
import triangle
print('\t\t\tmenu')
print('1. area of circle')
print('2. circumference of circle')
print('3. area of rectangle')
print('4. perimeter of rectangle')
print('5. area of square')
print('6. perimeter of square')
print('7. area of triangle')
print('8. perimeter of triangle')
print('9. quit')
choice=int(input('enter your choice-'))
if choice==1:
    radius=int(input('enter the radius-'))
    print('the area is',circle.area(radius))
elif choice==2:
    radius=int(input('enter the radius-'))
    print('the circumference is',circle.circumference(radius))
elif choice==3:
    width=int(input('enter the width-'))
    length=int(input('enter the length-'))
    print('the area is',rectangle.area(width,length))
elif choice==4:
    width=int(input('enter the width-'))
    length=int(input('enter the length-'))
    print('the perimeter is',rectangle.perimeter(width,length))
elif choice==5:
    side=int(input('enter the side of square-'))
    print('the area of square is',square.area(side))
elif choice==6:
    side=int(input('enter the side of square-'))
    print('the perimeter of square is',square.perimeter(side))
elif choice==7:
    a=int(input('enter the side of triangle-'))
    b=int(input('enter the side of triangle-'))
    c=int(input('enter the side of triangle-'))
    print('the area of triangle is',triangle.area(a,b,c))
elif choice==8:
    a=int(input('enter the side of triangle-'))
    b=int(input('enter the side of triangle-'))
    c=int(input('enter the side of triangle-'))
    print('the perimeter of triangle is',triangle.perimeter(a,b,c))
elif choice==9:
    print('quit')
else:
    ('invalid selection')   
