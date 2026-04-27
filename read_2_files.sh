echo "Enter the filename to be compared"
read file1
read file2
if diff "$file1" "$file2">/dev/null; 
then
   echo " Second file will be deleted"
   rm $file2
else
   echo "Files are not same"
fi
