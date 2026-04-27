echo "enter the size (N) :"
read N
i=1
sum=0
echo "enter the Numbers :"
while [ $i -le $N ]
do 
   read num              #get number
   sum=$((sum+num))       #sum+=num
   i=$((i+1))
done
echo "sum of n numbers is :" $sum
