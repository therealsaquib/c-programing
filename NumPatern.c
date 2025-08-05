#include<stdio.h>

int main(){
    int n;
    int rows ,cols;
    printf("Enter The NUmber :");
    scanf("%d",&n);
   
   for(rows = 1; rows <= n ; rows++){
     for (int sp =0 ; sp <= n-rows;sp++){
        printf(" ");
    }
    for (cols = 1 ; cols <=(2*rows)-1 ; cols++ ){
        printf("%d",rows);
        
    }

     printf("\n");
}
return 0;
}