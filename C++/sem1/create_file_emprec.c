#include<stdio.h>
void main()
{
   FILE *fptr;
   char name[20];
   int age;
   float salary;
   fptr=fopen("emp.rec","w");
   if(fptr==NULL)
   {
      printf("File does not exits\n");
      return;
   }
   printf("Enter the name\t:");
   scanf("%s",name);
   fprintf(fptr,"Name=%s\n",name);
   printf("Enter the age\t:");
   scanf("%d",&age);
   fprintf(fptr,"Age =%d\n",age);
   printf("Enter the salary\t:");
   scanf("%f",&salary);
   fprintf(fptr,"Salary=%.2f\n",salary);
   fclose(fptr);
}
