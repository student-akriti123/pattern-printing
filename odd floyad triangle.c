#include<stdio.h>
int main()
{
 int n;
 printf("Enter the value of:");
 scanf("%d",&n);

    int a=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            {
                printf("%d ",a);
                a=a+2;

            }

        printf("\n");
    }

return 0;
}
