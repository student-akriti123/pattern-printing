#include<stdio.h>
int main()
{
  int n;
  printf("Enter the value of:");
  scanf("%d",&n);

 for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            {
               if(i+j==6)
                printf(" * ");

            }

            printf("\n");
    }
    return 0;
}
