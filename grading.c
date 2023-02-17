//grading system
#include <stdio.h>

int main() {
    int chem,bio,math,avg;
    
    printf("Enter marks for math,chem,bio:");
scanf("%d%d%d",&math,&chem, &bio);
avg=(math+chem+bio)/3;
if(avg>=70 && avg<=100);{
    printf("A");}
 if(avg>=60 && avg<=69){
    printf("B");
}
else if(avg>=50 && avg<=59){
    printf("C");
}
else if(avg>=40 && avg<=49){
    printf("D");
}
else if(avg>=0 && avg<=39){
    printf("E");
}
    return 0;
}