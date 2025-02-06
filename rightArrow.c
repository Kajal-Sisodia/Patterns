/*
Enter the number: 5
*****
  ****
    ***
      **
        *
      **
    ***
  ****
*****

*/
#include<stdio.h>

int main(){
    int n, i, j, k;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        k= 2*i-2;
        for(j=1; j<=k; j++){
            printf(" ");
        }
        for(j=1; j<=n-i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1; i>0; i--){
        k= 2*i-2;
        for(j=1; j<=k; j++){
            printf(" ");
        }
        for(j=1; j<=n-i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}