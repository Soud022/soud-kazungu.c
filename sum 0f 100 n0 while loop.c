//progam to find sum of 100 digit no
#include <stdio.h>

int main() {
    int n=0,sum=0;
while(n<=99){
n=n+1,sum=sum+n;
    printf("%d ",n);}
printf("sum=%d ",sum);
    return 0;
}