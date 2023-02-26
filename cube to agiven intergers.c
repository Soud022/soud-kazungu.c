//program to find cube to a given intergers
#include <stdio.h>

int main() {
int i,ctr;
    printf("input no of terms : ");
scanf("%d",&ctr);
for(i=1;i<=ctr;i++){
    printf("num is : %dcube of %d is :%d |n",i,i,(i*i*i));
}
    return 0;
}