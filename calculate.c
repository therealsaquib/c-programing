#include<stdio.h>

int main(){
  int n,m,choice;
  printf("Enter TO Number");
  scanf("%d%d",&n,&m);
  printf("1. Add 2: Sub stract 3: Multiply 4: Divide");
  printf("Enter choice :");
  scanf("%d",&choice);
  switch(choice){
    case 1: int sum=n+m;
    printf("Sum of %d and %d is %d",n,m,sum);
    break;
    case 2: int diff=n-m;
    printf("Difference of %d and %d is %d",n,m,diff);
    break;
    case 3: int prod=n*m;
    printf("Product of %d and %d is %d",n,m,prod);
    break;
    case 4: if(m!=0){
        int div=n/m;
        printf("Division of %d and %d is %d",n,m,div);
        }
        else printf("Error! Division by zero is not allowed.");
        break;
        default: printf("Invalid choice");
        }
        return 0;
        }

   
