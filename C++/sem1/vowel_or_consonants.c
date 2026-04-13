#include<stdio.h>
int main()
{
   char a;
   printf("\nEnter an Alphabet");
   scanf("%c",&a);
   switch(a)
   {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
           printf("THE ALPHABET IS VOWEL");
	break;
      default:
	printf("THE ALPHABET IS CONSONANTS");
   }
     return 0;
}
