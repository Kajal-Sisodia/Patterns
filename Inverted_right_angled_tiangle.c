/*
Enter the number: 5
* * * * * 
* * * * 
* * * 
* * 
* 

*/
#include<stdio.h>

int main(){
    int n;
    int i,j;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            printf("* ");

        }
        printf("\n");
    }
    return 0;
}