a=float(input("Enter the enter timeg:"))
b=float(input("Enter the leaving time :"))
c=b-a
x=str(input("enter the vechicle :"))
while(x):
   if (x==truck or bus):
      if(c<3):
	 print("$20")
      else:
	 print("$30")
	 break
      elif(x==car):
	 if(c<3):
	    print("$10")
	 else:
	    print("$20")
	    break
	 else:
	    if(c<3):
	       print("$25")
	    else:
	       print("$10")
	       break
