//==============================================VOWEL AND CONSONANT===============================================
#include<stdio.h>
int main(){
    char ch;
    printf("Enter an Alphabet");
    scanf("%s",&ch);
    if(ch=='a'||'e'||'i'||'o'||'u'){
        printf("Entered Alphabet is a Vowel ");
    }
    else{
        printf("Enteres Alphabet is a consonant ");
    }
}
