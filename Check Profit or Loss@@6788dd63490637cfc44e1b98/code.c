#include <stdio.h>
int main() {
    int costprice,sellingprice;
    scanf("%d",&costprice);
    scanf("%d",&sellingprice);
    if(costprice>sellingprice){
        printf("Profit");
    }
    else if(sellingprice>costprice){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}