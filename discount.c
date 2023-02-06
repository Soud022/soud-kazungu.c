//discount on purchased items
#include <stdio.h>
int main() {
    int amount;
    printf("Enter the amount in shillings:");
    scanf("%d",&amount);
    if (amount>=5000){
printf("the person will get 10% discount");}
else{printf("the person will not get 10% discount");}
    return 0;
}