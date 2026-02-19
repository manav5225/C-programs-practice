// ============================Age Check====================================

#include<stdio.h>
int main() {
    int age;
    printf("Enter Age of Person: ");
    scanf("%d", &age);

    if ((age < 0) ||(age > 100)||(age==0)) {
        printf("Entered Age is invalid\n");
    } else { 
        printf("Entered Age is: %d\n", age);
    }

    return 0;
}
