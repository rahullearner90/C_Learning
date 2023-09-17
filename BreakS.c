#include <stdio.h>
int main(){
    int n;

    // do{
    //     printf("Enter a number :");
    //     scanf("%d",&n);
    // }while(n%2==0);
   
//    do{
//         printf("Enter a number :");
//         scanf("%d",&n);
//         if(n%2 != 0){
//             printf("Thank You..");
//             break;
//         }
//     }while(1);
   

    do{
        printf("Enter a number :");
        scanf("%d",&n);
        printf("%d \n",n);
        
        if(n%7 == 0){
            printf("Thank you..");
            break;
        }

    }while(1);
   

    return 0;
}