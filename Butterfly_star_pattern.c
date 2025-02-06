/*
Enter the number: 6
*          *
**        **
***      ***
****    ****
*****  *****
************
************
*****  *****
****    ****
***      ***
**        **
*          *
*/
#include<stdio.h>

int main(){
    int n,i,j,k=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=0; j<i; j++){
            printf("*");
        }
        k = 2*(n-i);
        for(j=0; j<k; j++){
            printf(" ");
        }
        for(j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n; i>0; i--){
        for(j=0; j<i; j++){
            printf("*");
        }
        k = 2*(n-i);
        for(j=0; j<k; j++){
            printf(" ");
        }
        for(j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}