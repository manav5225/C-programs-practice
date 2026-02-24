//============================================ASCII VALUE CODE======================================================
#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character");
    scanf("%c",&ch);

    printf("ASCII value for %c is %d\n",ch,ch);
    if(ch>=65&&ch<=90){
        printf("Character is Capital\n");
    }
    else if(ch>=97&&ch<=122){
        printf("Character is Small\n");
    }
    else if(ch>=48&&ch<=57){
        printf("Character is Number\n");
    }
    else{
        printf("\n Other Character");
    }
}
