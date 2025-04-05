#include <stdio.h>
int main()
{int x;
scanf("%d",&x);
int arr[x];
for(int i=0;i<=x-1;i++){
    scanf("%d",&arr[i]);
}
int max=arr[0];
for(int i=0;i<=x-1;i++){
    if(max<arr[i]){
        max=arr[i];
        }
        printf("%d",max);
        
    }

}

return 0;
}