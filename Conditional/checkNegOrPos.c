//===============================Enter any number and check the number is positive or negative==========================

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);
    if(num==0){
        printf("Number is 0 \n");
    }
    else if(num<0){
        printf("Number %d is a negative number",num);
    }
    else{
        printf("Number %d is a positive number",num);
    }
    return 0;
}
