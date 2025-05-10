float cal_discount(float price, float percentage){
    float discount = (price * percentage) / 100;
    float finalPrice = price - discount;
    return finalPrice;
}

int main(){
    float price, percentage, finalPrice;

    printf("Enter the price:\n ");
    scanf("%f", &price);

    printf("Enter the discount percentage: ");
    scanf("%f", &percentage);

    finalPrice = cal_discount(price, percentage);
    printf("The discounted price is  %.2f\n", finalPrice);

    return 0;
}
