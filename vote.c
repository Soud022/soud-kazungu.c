//eligibity in voting
#include <stdio.h>
int main() {
    int age,citizenship;
    printf("Enter age in years and citizenship:");
scanf("%d%d",&age,&citizenship);
if(age>=18&& citizenship){
    printf("the person is eligible to vote" );}
    else{printf("the person is not eligible to vote");
}
    return 0;
}