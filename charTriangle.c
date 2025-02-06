/*
Enter number: 5
A
AB
ABC
ABCD
ABCDE
*/
#include<stdio.h>

int main(){
    int n, i, j;
    char ch='A';
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%c",ch);
            ch++;
        }
        ch = 'A';
        printf("\n");
    }
    return 0;
}