#include<stdio.h>
int main(){
    int n=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
        printf("\n %d",n*i);
    }

    return 0;
}