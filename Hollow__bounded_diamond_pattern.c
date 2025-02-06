/*
Enter the number: 5
* * * * * * * * * * 
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *

*/
#include<stdio.h>

int main(){
    int n;
    int i,j,k;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            printf("* ");
        }
        int k= (2*i);
        for(j=0; j<k; j++){
            printf("  ");
        }
        for(j=0; j<n-i; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=n; i>0; i--){
        for(j=0; j<n-i+1; j++){
            printf("* ");
        }
        int k = (2*i-2);
        for(j=0; j<k; j++){
            printf("  ");
        }
        for(j=0; j<n-i+1; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
