#include<stdio.h>
int main()
{
   int phy,chem,mat,c;
   printf("\nEnter a physics mark");
   scanf("%d",&phy);
   printf("\nEnter a chemistry mark");
   scanf("%d",&chem);
   printf("\nEnter a maths mark");
   scanf("%d",&mat);
   c=mat+(phy+chem)/2;
   printf("cutoff marks:%d=%d+(%d+%d)/2",c,mat,phy,chem);
   return 0;
}
