#include<stdio.h>

int main(){
    int n;
    printf("Enter The NUmber :");
    scanf("%d",&n);
   
   for(int rows = 0; rows < n ; rows++){
    for (int sp =0 ; sp <= (n-1)-rows;sp++){
        printf(" ");
    }
    for(int cols = 0; cols<=rows;cols++){
        printf("*");
    }
    printf("\n");

   }

   return 0;
}