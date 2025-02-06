/*
Enter the number: 5
* * * * * 
*     *
*   *
* *
*

*/
#include<stdio.h>

int main(){
    int n;
    int i,j;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=n; i>0; i--){
        for(j=0; j<i; j++){
            if(i==n || j+i==i || j==i-1){

            printf("* ");
            }
            else{
                printf("  ");
            }

        }
        printf("\n");
    }
    // for(i=0; i<n; i++){
    //     for(j=0; j<n-i; j++){
    //         if(i==0 || j==0 || j==n-i-1){

    //         printf("* ");
    //         }
    //         else{
    //             printf("  ");
    //         }

    //     }
    //     printf("\n");
    // }
    return 0;
}