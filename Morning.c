#include<stdio.h>
void pnamaste();
void bonjour();

int main(){
    char ch;
    printf("Enter First Letter of Your country\n");
    scanf("%c",&ch);

    if(ch=='i'){
        pnamaste();
    }else if(ch=='f'){
        bonjour();
    }

    return 0;
}

void pnamaste(){
    printf("Namaste..");
}

void bonjour(){
    printf("Bonjour..");
}