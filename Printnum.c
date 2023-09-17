#include<stdio.h>
int main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    int i=1;
    do{
        printf("\nhello world %d",i);
        i++;
    }while(i<=n);

    return 0;
}