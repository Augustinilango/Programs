#include<stdio.h>
#include<string.h>
int main()
{
   char a[50],b[50];
   int l,choice;
   printf("Enter a string:");
   scanf("%s",a);
   printf("\nEnter the choice:");
   scanf("%d",&choice);
   switch(choice)
   { 
      case 1:
	 l=strlen(a);
	 printf("\nlength of string is%d",l);
	 break;
      case 2:
	 strcpy(b,a);
	 printf("\noriginal string is %s",a);
	 printf("\ncopied string is %s",b);
	 break;
	 
      case 3:
	 printf("\nEnter a string 2:");
	 scanf("%s",b);
	 strcat(a,b);
	 printf("\nconcatinated string is %s",a);
	 break;
      case 4:
	 printf("\nenter the string:");
	 scanf("%s",b);
	 if(strcmp(a,b)==0)
	 {
	    printf("string are equal");
	 }
	 else
	    printf("strings are not equal");
	 break;
      default:
	 printf("\nEnter invalid choice");
	 break;
   }
   return 0;
}
