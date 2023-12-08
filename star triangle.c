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

       for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }


return 0;
}
