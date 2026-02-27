//==================================sum of 10 natural numbers=========================================
#include<stdio.h>
int main(){
    int i=1;
    int sum=0;
    printf("Sum of 10 Natural Numbers is : \n");
    do{
        
        sum+=i;
        i++;
    }while(i<=10);
    printf("%d",sum);
}
