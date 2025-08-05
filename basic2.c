#include<stdio.h>

int main(){
   int y=5;
  int  b = y--;
   printf("%d\t%d\n",b,y);   
    int a = --y;
    printf("%d\t%d\n",a,y);
   return 0;
}