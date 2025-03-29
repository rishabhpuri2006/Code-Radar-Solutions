#include <stdio.h>

int main()
{
int x;
scanf("%d",&x);
int arr[x];
for(int i=0;i<=x-1;i++){
    scanf("%d",&arr[i]);
} 
int duplicate=0;
for (int i=0;i<=x-1;i++){
for(int j=i+1;j<=x-1;j++){
    if(arr[i]==arr[j]){
        printf("%d\n",arr[i]);
        duplicate=1;
        break;
    }
}
if(duplicate){
    break;
}
}
if(!duplicate){
    printf("-1\n");
}

    return 0;
}