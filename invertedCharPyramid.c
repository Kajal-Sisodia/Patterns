/*
Enter the number: 5
ABCDEDCBA
 ABCDCBA
  ABCBA
   ABA
    A
*/
#include<stdio.h>

int main(){
    int n;
    int i,j;
    
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=n; i>0; i--){
        for(j=0; j<n-i; j++){
            printf(" ");
        }
        char ch='A';
        for(j=0; j<i; j++){
            printf("%c",ch);
            ch++;
        }
        ch = 'A'+i-2;
        for(j=0; j<i-1; j++){
            printf("%c",ch);
            ch--;
        }
        printf("\n");
    }
        return 0;
}