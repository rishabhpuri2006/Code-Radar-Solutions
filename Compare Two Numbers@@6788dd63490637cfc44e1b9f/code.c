#include <stdio.h>
int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
if(x==y){
    printf("Equal");
}
else if(x>y){
    printf("First");
}
else{
    printf("Second");
}
    return 0;
}