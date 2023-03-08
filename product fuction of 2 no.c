//program to  product of two no by fuction
#include <stdio.h>
int product(int *numb1,int *numb2);
int main() {
/*local variables definition*/
int answer;
int numb1=5;
int numb2=8;
/*calling afunction to get a product value*/
answer=product(&numb1,&numb2);
    printf("The product of the two no is :%d",answer);

    return 0;
}
/*function return the product of the two no*/
int product(int *a,int *b){
    return *a**b;
}