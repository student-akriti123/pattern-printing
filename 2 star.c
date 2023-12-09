#include<stdio.h>
int main()
{
  int n;
  printf("Enter the value:");
  scanf("%d",&n);

  for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
        {
            if(i==1||i+j==6||i==5)
                printf(" * ");
            else
              printf("   ");

    }

        printf("\n");
}

    return 0;
}
