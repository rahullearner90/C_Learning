#include <stdio.h>
int main(){

    int marks;
    printf("Enter Marks :");
    scanf("%d",&marks);

    if(marks>=90 && marks<=100){
        printf("Grade : A+");
    }else if(marks>70 && marks<90){
        printf("Grade : A");
    }else if(marks>=30 && marks<=70){
        printf("Grade : B");
    }else if(marks<30 && marks>=0){
        printf("Grade : C");
    }else{
        printf("Invalid Marks..");
    }
    printf("\nYour Marks is %d.",marks);

    return 0;
}