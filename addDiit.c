#include<stdio.h>

int main(){
   int num, sum = 0, digit;
   int a,b,temp;
   printf("Enter The Number :");
   scanf("%d",&num);
   while(num > 0){
    int digit = num % 10;
    sum = sum + digit;
    num = num / 10;
   }
   printf("%d",sum);
   return 0;
}