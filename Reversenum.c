#include <stdio.h>
int main(){
    int num,rev=0,rem=0,temp=0;
    printf("Enter a num :");
    scanf("%d",&num);
    temp=num;

    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    printf("\nRevers is : %d",rev);
    printf("\n %d",temp==num);

    // if(temp==num){
    //     printf("\nPellindrome");
    // }else{
    //     printf("\nNot a pellindrome");
    // }

    return 0;
}