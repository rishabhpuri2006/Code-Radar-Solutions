#include <stdio.h>

int main()
{
int x;
scanf("%d",&x);
int arr[x];
for(int i=0;i<=x-1;i++){
    scanf("%d\n",&arr[i]);
}
for(int i=0;i<=x-1;i++){
    if(arr[i-1]<arr[i]&&arr[i]>arr[i+1]){
        printf("%d",arr[i]);
        break;
    }
    else{
        printf("-1");
    }
}
return 0; 
}