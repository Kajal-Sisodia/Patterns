/*
Enter the number: 5
* * * * * * * * * 
  *           * 
    *       * 
      *   * 
        * 
*/
#include<stdio.h>

int main(){
    int n;
    int i,j;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=n; i>0; i--){
        for(j=0; j<n-i; j++){
            printf("  ");
        }
        int k=(2*i-1);
        for(j=0; j<k; j++){
            if(i+j==i || i==n || j==k-1){
                printf("* ");
            }
            // if(i==n || i==1 || j==0 || j==k-1){
            //     printf("* ");
            // }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
        return 0;
}