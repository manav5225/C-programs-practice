//======================================EVEN OR ODD--Number is negative nested if ===========================================
#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number\n");
    scanf("%d",&num);

    if(num<=0){
        if(num%2==0){
            printf("Even Number");
        }else{
            printf("Odd Number");
        }
    }
    {
        printf("Number is Negative\n");
    }
}
