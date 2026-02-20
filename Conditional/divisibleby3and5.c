//==========================================Number is divisible by 3 and 5=====================================================

#include<stdio.h>
int main() {
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    if((num%3==0)&&(num%5==0)){
        printf("Enteres number %d is divisible by 3 and 5 both\n",num);
    }
     else if(num%5==0){ 
        printf("Entered Number %d is divisible by 5 only\n", num);
    }
    else if (num%3==0) {
        printf("Entered Number %d is divisible by 3 only\n",num);
    }
    else{
        printf("Entered Number %d is not divisible by 3 only and 5 both\n",num);
    }

    return 0;
}
