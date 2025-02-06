#include<stdio.h>
int main(){
    int n, i, j;
    char ch='A';
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        ch = 'A';
        for(j=1; j<=n-i+1; j++){
            printf("%c",ch);
            ch++;
        }
        ch = 'A' + n - i;
        int k=2*i-2;
        for(j=1; j<k; j++){
            printf(" ");
        }
        for(j=1; j<=n-i+1; j++){
            if(i==1){
                printf("%c",ch-1);
                ch--;
            }
            else{
                printf("%c",ch);
                ch--;
            }
        }
        
        printf("\n");
    }
    return 0;
}