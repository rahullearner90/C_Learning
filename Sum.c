#include<stdio.h>
int main(){
    int sum=0,n;
    printf("Enter a number :");
    scanf("%d",&n);

    for(int i=n; i>=0; i--){
        sum+=i;
        printf("\n %d",i);
    }

    printf("Sum is : %d",sum);

    return 0;
}