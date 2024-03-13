#include <stdio.h>

int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%d ",2*i-1);
        }
        printf("\n");
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            printf("%d ",2*(n-i+1));
        }
        printf("\n");
    }
    return 0;
}
/*
enter the value of n: 4
1
33
555
7777
666
44
2
*/
