//===================================Even and Odd======================================================================

#include<stdio.h>
int main() {
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    if (num%2==0) {
        printf("Entered Number is Even %d\n",num);
    } else { 
        printf("Entered Number is Odd %d\n", num);
    }

    return 0;
}
