//progam to find  100 digit no
#include <stdio.h>

int main() {
    int n=0,sum=0;
    do
    {
        printf("%d ",n);
        n=n+1,sum=sum+n;
    }
    while(n<=99);
    printf("sum=%d ",sum);
    return 0;
}