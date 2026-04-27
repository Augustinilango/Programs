echo "enter the year:"
read year
if [ $year -ge 1000 -a $year -le 9999 ]
then
   if [ $((year%4)) -eq 0 ]
   then
      echo " $year is a leap year"
   else 
      echo " $year is not a leap year"
   fi
fi
