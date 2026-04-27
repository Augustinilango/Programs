clear
#hours=`date | cut –c 12-13`
hours=`date +%H`
if [ $hours -le 12 ]
then
   echo “Good Morning”
elif [ $hours -le 16 ]
then
   echo "Good Afternoon"
elif [ $hours -le 20 ]
then
   echo "Good Evening"
else
   echo “Good Night”
fi
