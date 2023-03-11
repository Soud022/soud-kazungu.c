// program to give discounty
#include <stdio.h>

int main() {
    int amount,price,quantity,dicounty;
    printf("Enter quantity and price:");
    scanf("%d%d",&quantity,&price);
    amount=quantity*price;
if(amount>=5000)
{
    dicounty=amount*0.1;
    amount=amount-dicounty;
}
printf("%d",amount);


    return 0;
}