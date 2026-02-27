//====================================SUM of even and odd 
#include<stdio.h>
int main(){
    int a=1;
    int sum1=0;
    int sum2=0;
    do{
        if(a%2==0){
            sum1+=a;
        }
        else{
            sum2+=a;
        }
        a++;
    }while(a<=120);
    printf("Sum of Even numbers till 120 : %d\n",sum1);
    printf("Sum of Odd numbers till 120 : %d\n",sum2);
    printf("Sum of All till 120 : %d\n",sum1+sum2);
}
