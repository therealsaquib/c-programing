#include<stdio.h>

int main(){
   int marks[5],num=0;
   printf("Enter the marks of 5 students:\n");
   for(int i=0;i<5;i++){
    scanf("%d",&marks[i]);
    num+=marks[i];
    }
    int sum = num/5;

    printf("Sum of marks of 5 students is: %d\n",sum);
    if(sum >=91 && sum <= 100){
        printf("Grade:  O\t and Grade Point : 10\n");
        }
        else if(sum >=81 && sum < 91){
            printf("Grade: A+\t and Grade Point : 9\n");
            }
            else if(sum >=71 && sum < 81){
                printf("Grade: A\t and Grade Point : 8\n");
                }
                else if(sum >=61 && sum < 71){
                    printf("Grade: B+\t and Grade Point : 7\n");
                    }
                    else if(sum >=56 && sum < 61){  
                        printf("Grade: B\t and Grade Point : 6\n");
                        }
                        else if(sum >=46 && sum < 56){
                            printf("Grade: C+\t and Grade Point : 5\n");
                            }
                            else if(sum >=41 && sum < 46){
                                printf("Grade: C\t and Grade Point : 4\n");
                                }
                                else if(sum >=36 && sum < 41){  
                                    printf("Grade: D+\t and Grade Point : 3\n");
                                     }
                                    else{
                                        printf("fail \n");
                                        }
                return 0;
 }
                        