//============================Greastest among three numbers==============================================================

#include<stdio.h>
   int main(){
        int num1,num2,num3;
        printf("Enter Number 1 :");
        scanf("%d",&num1);
        printf("Enter Number 2 :");
        scanf("%d",&num2);
        printf("Enter Number 3 :");
        scanf("%d",&num3);

        if((num1==0)&&(num2==0)&&(num3==0)){
            printf("All numbers are zero");
        }
        else if((num1>num2)&&(num1>num3)){
            printf("Number 1: %d is greater than number 2 %d and number 3 %d :",num1,num2,num3);
        }
        else if((num2>num1)&&(num2>num3)){
            printf("Number 2: %d is greater than number 1 %d and number 3 %d :",num2,num1,num3);
        }
        else{
            printf("Number 3: %d is greater than number 1 %d and number 2 %d :",num3,num1,num2);
        }
        return 0;
    }
