#include<stdio.h>
void hello(int n);

int main(){
    hello(5);

    printf("%d",sum(10));

    return 0;
}

void hello(int n){
    if(n==0){
        return;
    }
    printf("Hello World %d \n",n);
    hello(n-1);
    printf("%d \n",n);
}

int sum(int n){
    if(n==0){
        return;
    }
    
    return ;
    
}