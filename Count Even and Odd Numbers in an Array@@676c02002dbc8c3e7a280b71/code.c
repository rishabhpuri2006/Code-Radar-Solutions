#include <stdio.h>
int main()
{int x;
scanf("%d",&x);
int arr[x];
for(int i=0;i<=x-1;i++){
    scanf("%d",&arr[i]);
}
int evencount=0;
int oddcount=0;
for(int i =0;i<=x-1;i++){
    if(i%2==0){
    evencount++;
    }
    else if{
    
    oddcount++;
    }
}
printf("%d ",evencount);
printf("%d",oddcount);
   return 0;
}