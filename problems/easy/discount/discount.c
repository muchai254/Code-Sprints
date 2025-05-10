#include <stdio.h>
#include <math.h>

float cal_discount(float price, float percentage){
    // put your code here
    float discount = price * (percentage / 100)
    float finalPrice = price - discount;

    return finalprice;
}

int main(){
    float price, discount, finalPrice;
    
    printf("Enter original price: ");
    scanf("%d", &price);
    
    printf("Enter percentage discount: ");
    scanf("%f", &percentage);

    finalPrice = cal_dicsount(price, percentage); 
    printf("Final price: ");
    scanf("%d", finalPrice);
    
 return 0;
}
