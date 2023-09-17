#include<stdio.h>
int main(){
    int m=10,n=10;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(i==j || i+j==n || i==1 && j<m || j==1 && i<m || i==10 && j<m || j==10 && i<m || j==5 && i<m || i==5 && j<m){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}