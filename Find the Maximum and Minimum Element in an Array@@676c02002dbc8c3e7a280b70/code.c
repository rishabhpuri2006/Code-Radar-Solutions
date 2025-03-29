#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int arr[x];
    int max=arr[0];
    int min=arr[x-1];
    for (int i=0;i<=x-1;i++){
        scanf("%d",&arr[i]);
    //int max=arr[0];
    for (int i=0;i<=x-1;i++){
        if(max<arr[i]);
        max=arr[i];
    }
    for (int i=0;i<=x-1;i++){
        if(min>arr[x-1]);
        min=arr[i];
}
}
printf("%d",min);
printf("%d",max);
return 0;
}