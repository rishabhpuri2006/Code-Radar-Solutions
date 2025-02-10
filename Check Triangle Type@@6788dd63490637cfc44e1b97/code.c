#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if(x==y==z){
        printf("Equilateral");
    }
    //else if(x==y!=z||x==z!=y||y==z!=x){
    //printf("Isosceles");
    //}
    else if(x!=y!=z){
    printf("Scalene");
     }
    else{
    printf("Isosceles");
    }
    return 0;
}