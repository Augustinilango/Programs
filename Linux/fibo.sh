#!/bin/sh
echo "how many nos to be generated?"
read n
x=0
y=1
i=2
echo "fibonacci series up to $n term:"
echo "$x"
echo "$y"
while [ $i -lt $n ]
do
   i=$((i+1))
   z=$((x+y))
   echo "$z"
   x=$y
   y=$z
done
