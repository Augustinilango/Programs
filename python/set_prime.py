def Prime_Numbers(n):
   if n<=1:
      return False
   for j in range(2,int(n**0.5)+1):
      if n%j==0:
	 return False
      return True   
a=10
odd=[x for x in range(0,a) if x%2!=0]
prime=set()
for num in range(2,a+1):
   if Prime_Numbers(num):
      prime.add(num)
      print("ODD NUMBERS",odd)        
      print("PRIME NUMBERS",prime)
      print(odd | prime)
      print(odd & prime)
      print(odd - prime)
      print(odd ^ prime)
