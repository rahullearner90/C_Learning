#include <stdio.h>
int main(){
    char day;
    printf("Enter day :");
    scanf("%c",&day);
    switch(day){
        case 'm':
            printf("Monday");
            break;
        case 't':
            printf("Tuesday");
            break;
        case 'w':
            printf("Wednesday");
            break;
        case 'T':
            printf("Tuesday");
            break;
        case 'f':
            printf("Frieday");
            break;    
        case 's':
            printf("Saturday");
            break;
        case 'S':
            printf("Sunday");
            break;
        default:
            printf("Enter Valid Day..sorry..no..match");       
    }
    // printf("\n %c",day);

    return 0;
}