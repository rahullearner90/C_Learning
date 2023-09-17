#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++){
        if(i==5){
            continue;//skip 5
        }else if(i==8){
            break; //Stop
        }
        printf("%d",i);
    }

    return 0;
}