import math
a=eval(input("enter 1 no"))
b=eval(input("enter 2 no"))
c=eval(input("enter 3 no"))
d=b**2-4*a*c
r1=-b+(math.sqrt(d))/(2*a)
r2=-b-(math.sqrt(d))/(2*a)
if d>0:
    print("roots are unequal")
elif d==0:
    print("roots are equal")
else:
    print("roots are imaginary")
print("root1 is-",r1)
print("root2 is-",r2)
