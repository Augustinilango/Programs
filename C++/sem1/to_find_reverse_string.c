#include<stdio.h>
int main()
{
   char a[50],b[50];
   int i,j=0,l=0,flag=0,choice;
   printf("Enter the string\t:");
   scanf("%s",a);
   printf("Enter the choice\t:");
   scanf("%s",&choice);
   switch(choice)
   {
      case 1:
	 for(i=0;a[i]!='\0';i++)
	 {
	    l++;
	 }
	 printf("length of string is %d",l);
	 break;
      case 2:
	 printf("The copied string is");
	 for(i=0;a[i]!='\0';i++)
	 {
	    l++;
	 }
	 for(i=0;i<l;i++)
	 {
	    b[i]=a[i];
	 }
	 printf("original string is %s",a);
	 printf("copied string is %S",b);
	 break;
      case 3:
	 printf("The reverse of string is");
	 for(i=0;a[i]!='\0';i++)
	 {
	    l++;
	 }
	  for(i=l;i>=0;i--)
	  {
	     printf("%s",a[i]);
	  }
	  break;
      case 4:
	  for(i=0;a[i]!='\0';i++)
	  {
	     l++;
	  }  
	 for(i=0;i<l;i++)
	 {
	    if(a[i]=a[l-i-1])
	    {
	       flag=1;
	    }
	 }
	 if(flag==0)
	 {
	    printf("It is in palindrome");
	 }
	 else
	 {
	    printf("It is not in palindrome");
	 }
	 break;
      default:
	 printf("invalid choice");
	 break;
   }
   return 0;
}
