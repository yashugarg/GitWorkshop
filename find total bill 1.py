#aim to find the liberary charges
d=int(input("enter the days-"))
if d<=5 :
    f=d*40
elif d<=10 :
    f=200+(d-5)*65
else:
    f=200+325+(d-10)*80    
print("total cost is",f)
