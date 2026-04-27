#!/bin/bash
echo "enter 2 numbers"
read a b
echo "enter the choice"
echo "1.addition"
echo "2.subtraction"
echo "3.multiplicattion"
echo "4.division"
read ch
case $ch in
   1)res=`echo $a + $b | bc`
      ;;
   2)res=`echo $a - $b | bc`
      ;;
   3)res=`echo $a \* $b | bc`
      ;;
   4)res=`echo $a / $b | bc`
      ;;
esac
echo "result : $res"
