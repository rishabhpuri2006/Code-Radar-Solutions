#include<stdio.h>
int main(){
int x;
scanf("%d",&x);
int arr[x];
for (int i=0;i<=x-1;i++){
    scanf("%d",&arr[i]);
    }
int count=0;
for (int i=0;i<=x-1;i++){
    for(int j=4;j<=100;j++){
    if(arr[i]%j==0){
    printf("%d",arr[i]);
    count++;
    break;
    }
    }
    }
    return 0;
}