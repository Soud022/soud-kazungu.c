//program to find product
#include <stdio.h>
float prod(int,int);

void main() {
    int a,b;
    float p;
    printf("Enter the two no : ");
    scanf("%d%d ",&a,&b);
p=prod(a,b);
printf("prod:%d,prod");
}
float prod(int x,int y)
{
    int pd;
    pd=(float)x*y;
    return(pd);
}