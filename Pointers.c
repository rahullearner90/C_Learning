#include<stdio.h>
int main(){
    int age=22;
    int *ptr=&age;
    printf("%u\n",*ptr);
    printf("%d\n",&ptr);
    printf("%u\n",&age);
    return 0;
}