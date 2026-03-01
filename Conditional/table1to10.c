//==============================================table from 1 to 10=====================================================================
#include<stdio.h>
int main(){
    int num;
    printf("Enter Till which number you want Table for:\n");
    scanf("%d",&num);
    int b=1;
    int a=1;
    do{ 
        a=1;
        do{
            printf("%d x %d = %d\n",b,a,b*a);
            a++;

        }while(a<=10);
        printf("\n");
        b++;
    }while( b<= num);
    return 0;
}
