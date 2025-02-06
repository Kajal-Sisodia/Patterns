/*
        * 
      *   * 
    *   *   * 
  *   *   *   * 
*   *   *   *   * 
*/
#include<stdio.h>

int main(){
    int n;
    int i,j;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=0; j<n-i; j++){
            printf("  ");
        }
        int k = (2*i-1);
        for(j=0; j<k; j++){
            if(j%2!=0){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}