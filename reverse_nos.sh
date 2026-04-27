read l
if [ 1 -eq 1 ]
then
   if [ $l -gt 0 ]
   then
      num=$l
      sumi=0
      while [ $num -ne 0 ]
      do
	 lnum=`expr $num % 10`
	 sumi=`expr $sumi \* 10 + $lnum`
	 num=`expr $num / 10`
      done
      echo "Reverse of digits is  $sumi of $l"
   else
      echo " Number is less than 0"
   fi
else
   echo "Insert only one parameter "
fi     
