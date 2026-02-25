//=================================================Even number 100==============================================
#include<stdio.h>
int main(){
    int a=1;
    printf("Even Numbers are :\n");
    do{
        if(a%2==0){
            printf("%d\n",a);
            
        }
        a++;

    }while(a<=100);
}
