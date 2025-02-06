/*
Enter the number: 5
        A 
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A

*/
#include<stdio.h>

int main(){
    int n;
    int i,j;
    char ch = 'A';
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=0; j<n-i; j++){
            printf("  ");
        }
        ch = 'A';
        for(j=1; j<=i; j++){
            printf("%c ",ch);
            ch++;
        }
        ch = 'A'+ i-2;
        for(j=1; j<i; j++){
            printf("%c ",ch);
            ch--;
        }        
        printf("\n");
    }
        return 0;
}