#include<stdio.h>
int main(){
    int n;
    int nst=1;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=1;j<=nst;j++){
    nst=nst+2;}
    }
    printf("*");
    return 0;
}