#include <stdio.h>
int main() {
    char x;
    scanf("%c",&x);
    if(x==A){
        printf("Excellent");
    }
    else if(x==B){
        printf("Good");
    }
    else if(x==C){
        printf("Average");
    }
    else if(x==D){
        printf("Below Average");
    }
    else if(x==F){
        printf("Fail");
    }
    else if(x==6){
        printf("Saturday");
    }
    else if(x==7){
        printf("Sunday");
    }
    else{
        printf("Invalid");
    }
    return 0;
}