echo -n "enter the name of the country: "
read country
echo "the official language of $country is"
case $country in
india)
   echo -n "Indian"
   ;;
romania)
   echo -n "Romanian"
   ;;
italy)
   echo -n "italian"
   ;;
china)
   echo -n "chinese"
   ;;
*)
   echo -n "unknown"
   ;;
esac
