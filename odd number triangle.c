#include<stdio.h>
int main()
{

 int a;
 printf("Enter the value of a\n");
  scanf("%d",&a);

 for(int i=1;i<=a;i++)
    {
        int a=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            a=a+2;

        }
    printf("\n");
    }


 return 0;
}
