//===============================================ONLY CAPITAL VOWEL AND CONSONANT================================================================
#include<stdio.h>
  int main(){
    char ch;
    printf("Enter any character");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90){
        if(ch=='A'||'E'||'I'||'O'||'U'){
            printf("\nEntered Charater is a Vowel\n");
        }
        else{
            printf("\nEntered Character is a Consonant\n");
        }
    }
    else{
        printf("Invalid Entry of the character");
    }
}
