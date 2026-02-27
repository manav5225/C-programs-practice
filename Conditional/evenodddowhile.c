#include<stdio.h>
int main(){
    int a=1;
    int sum=0;
    printf("Even Numbers are :\n");
    do{
        if(a%2==0){
            printf("%d\n",a);
            sum+=a;
            
        }
        a++;

    }while(a<=100);
    printf("Addition of all the Even number till 100%d\n",sum);
}
