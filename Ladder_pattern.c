/*
Enter the number: 6
* 
* *
* * *
* * * *
* * * * *
* * * * * *
            *
            * *
            * * *
            * * * *
            * * * * *
            * * * * * *
                        *
                        * *
                        * * *
                        * * * * 
                        * * * * *
                        * * * * * *
                        
*/
#include<stdio.h>

int main(){
    int n,i,j;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("  ");
        }
        for(j=0; j<i+1; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=0; i<n; i++){
        for(j=0; j<n*2; j++){
            printf("  ");
        }
        for(j=0; j<i+1; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}