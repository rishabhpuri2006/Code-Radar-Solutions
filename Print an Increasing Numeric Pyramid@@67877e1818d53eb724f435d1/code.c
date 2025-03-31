#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int nst=1;
    for (int i=1;i<=n-1;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=nst ;j++){
            printf("%d",j);
        }
        nst=nst+1;
        printf("\n");
    }

    return 0;
} 