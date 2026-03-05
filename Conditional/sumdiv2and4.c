#include<stdio.h>
int main(){
    int sum=0;
    int a=1;
    do{
        if(a%2==0&&a%4==0){
            sum+=a;
        }
        a++;
    }while(a<=100);
    printf("Sum of all number divisible by 2 and 4 are : %d",sum);
}
