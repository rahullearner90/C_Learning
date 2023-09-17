#include <stdio.h>
int main(){
    int isMonday=0;
    int isRaining=1;
    printf("%d",isMonday && isRaining);
    int num;
    printf("\nEnter a num : ");
    scanf("%d", &num);
    printf("Value is : %d", num>9 && num<100);
    return 0;
}