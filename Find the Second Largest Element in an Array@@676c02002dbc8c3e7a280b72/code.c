#include <stdio.h>
#include<limits.h>
int main()
{int x;
scanf("%d",&x);
int arr[x];
for(int i=0;i<=x-1;i++){
   scanf("%d",&arr[i]);
 }
int max=INT_MIN;
int smax=INT_MIN;
for(int i=0;i<=x-1;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
for (int i=0;i<=x-1;i++){
    if(arr[i]!=max && smax<arr[i]){
        smax=arr[i];
    }
    if(smax==INT_MIN){
    smax=-1;}
    
}
printf("%d\n",smax);
return 0;
}