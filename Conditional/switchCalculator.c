//===========================================SWITCH==SIMPLE CALCULATOR==============================================================
#include<stdio.h>
int main(){
    int ch,a,b;
    menu:
    printf("1:Addition\n2:Substraction\n3:Division\n4:Multiplication\n5.Exit\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:{
        printf("Enter 2 numbers to perform Addition\n");
        scanf("%d %d",&a,&b);
        printf("Addition of 2 numbers is : %d",a+b);
        break;
    }
    case 2:{
        printf("Enter 2 numbers to perform Substraction\n");
        scanf("%d %d",&a,&b);
        printf("Substraction of 2 numbers is : %d",a-b);
        break;
    }
    case 3:{
        printf("Enter 2 numbers to perform Division\n");
        scanf("%d %d",&a,&b);
        if (b>0)
        {
            printf("Division of 2 numbers is : %d\n",a/b);
        }
        else{
            printf("Dont divide by 0\n");
        }
        break;
    }
    case 4:{
        printf("Enter 2 numbers to perform Multiplication\n");
        scanf("%d %d",&a,&b);
        if(a>0&&b>0){
            printf("Multiplication of 2 numbers is : %d",a*b);
        }
        else{
            printf("dont multiply by 0");
        }
        
        break;
    }
    case 5:{
        printf("Thank You!\n");
        return 0;
        break;
    }
    default:{
        printf("Invalid Entry\n");
        break;
    }
    }
    if(ch==5){
        return 0;
    }
    else{
    goto menu;
    }
    return 0;
}
