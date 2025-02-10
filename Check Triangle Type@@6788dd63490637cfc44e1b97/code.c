#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if(x==y&y==z){//yaha teeno ikathe nhi equal kr skte 
        printf("Equilateral");
    }
    else if(x==y||x==z||y==z){
    printf("Isosceles");
    }
    else{
    printf("Scalene");
     }
    return 0;
}