#include <stdio.h>
int main() {
    int x,y,z;
    if(x==y==z){
        printf("Equilateral");
    }
    else if(x==y!=z||x==z!=y||y==z!=x){
        printf("Isoceles");
    }
    else{

    printf("Scalene");
     }
    return 0;
}