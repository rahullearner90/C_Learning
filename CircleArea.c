#include <stdio.h>
int main(){
    float pi=3.14,area;
    int r;
    printf("Enter Radius of Circle :");
    scanf("%d",&r);
    area=pi*r*r;
    printf("Area of circle is %f",area);
    
    return 0;
}