num=int(input("Enter a number"))

for i in range (1,num+1) :
   for j in range (1,num+1) :
      if i==0 or i==num-1 or j==0 or j==num-1:
	 print("*", end=" ") 
      else:
	 print(" ", end=" ")
	 break
      break
   print()   
