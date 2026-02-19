//==================================Enter two numbers and tell the greatest===============================================

#include<stdio.h>
int main(){
        int num1,num2;
        printf("Enter Number 1 :");
        scanf("%d",&num1);
        printf("Enter Number 2 :");
        scanf("%d",&num2);

        if(num1==num2){
            printf("Both the numbers are same");
        }
        else if((num1==0)&&(num2==0)){
            printf("Both numbers are zero");
        }
        else if(num1>num2){
            printf("Number 1: %d is greater than number 2: %d ",num1,num2);
        }
        else{
            printf("Number 2: %d is greater than number 1: %d ",num2,num1);
        }
        return 0;
    }
