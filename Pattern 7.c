#include <stdio.h>

int main() {
    int i,j,n;
    printf("enter no of lines:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
enter no of lines:5
*****
*****
*****
*****
*****
*/