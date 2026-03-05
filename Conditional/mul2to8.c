#include<stdio.h>
int main(){
    int sum=1;
    int a=2;
    do{
        sum*=a;
        a++;
    }while(a<=8);
    printf("%d\n",sum);
}
