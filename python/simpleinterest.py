def simple(p,n,r):
   result=(p*n*r)/100
   print(result)

p=float(input("enter principal value:"))
n=float(input("enter no.of.years :"))
age=int(input("enter a age :"))
if age>60:
   print(simple(p,n,12))
else:
   print(simple(p,n,10))
