//ques# check whether the number is prime
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++){
        if(n%i==0){
            printf("Not Prime");
            break;
        }
        else{
        printf("Prime\n");
        break;
       }
    }
    return 0;
}