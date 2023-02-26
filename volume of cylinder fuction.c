//program to find VOLUME OF A CYLINDER
#include <stdio.h>
float prod(int,int);

void main() {
    int height,radius;
    float v;
    printf("Enter the radius and height of the cylinder : ");
    scanf("%d%d ",&radius,&height);
v=3.142*radius*radius*height;
printf("vol:%d,vol");
}
float prod(int x,int y)
{
    int volume;
    volume=(float)x*y;
    return(volume);
}