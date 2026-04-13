x=int(input("Enter the giving amount :"))
y=int(input("Enter the billing amount :"))
a=x-y
a1=a//500
print("500 X",a1)
b=a%500
b1=b//200
print("200 X",b1)
c=b%200
c1=c//100
print("100 X",c1)
d=c%100
d1=d//50
print("50 X",d1)
