//===============================================================print sum and sub of no divisble by 2=======================================
#include<stdio.h>
int main(){
    int sum=0;
    int sub=2;
    int a=1;
    do{
        if(a%2==0){
        sum+=a;
        if(a!=2){
            sub-=a;
        }
        
        }
        a++;


    }while(a<=100);
    printf("Sum : %d and Sub : %d" ,sum,sub);

}
