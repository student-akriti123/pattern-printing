#include<stdio.h>
int main()
{
 int a;
 printf("Enter the value of a\n");
 scanf("%d",&a);

 int b;
 printf("Enter the value of b\n");
 scanf("%d",&b);

 for(int i=1;i<=a;i++)
   {
     for(int i=1;i<=b;i++)
       {
           printf("%d",i);
       }
      printf("\n");
   }












 return 0;
}
