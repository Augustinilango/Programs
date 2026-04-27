clear
echo "Menu"
echo "1. lower to upper"
echo "2. upper to lower"
echo "3.quit"
echo "Enter your choice"
read choice
case $choice in
   1)echo "enter file : \c"
      read f1
      echo "converting lower to upper "
      echo "${f1^^}"
      ;;
   2)echo "enter the file : \c"
      read f1
      echo "converting upper to lower "
      echo "${f1,,}"
      ;;
   3|*)
      echo "exit....."
      exit;;
esac
