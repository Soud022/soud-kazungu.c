//bank loan
#include <stdio.h>
int main() {
int age,salary;
    printf("Enter the age in years and salary:");
scanf("%d%d",&age,&salary);
if (age>=21&&salary>=2100){
    printf("congratulation you are qualify for a loan");
}
else{printf("unfortunately you not qualify for the loan");}
    return 0;
}