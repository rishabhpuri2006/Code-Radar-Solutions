#include <stdio.h>
int main() {
    int costprice,sellingprice;
    scanf("%d",&costprice);
    scanf("%d",&sellingprice);
    if(costprice>sellingprice){
        printf("Loss");
    }
    else if(sellingprice>costprice){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}