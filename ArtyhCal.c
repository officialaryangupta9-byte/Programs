
//Program to perform Arithmetic calculation using int function.


#include <stdio.h>
int main() {
    int n1, n2, rem;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);
    printf("Sum : %d", n1 + n2);
    printf("\nDifference : %d", n1 - n2);
    printf("\nProduct : %d", n1 * n2);
    printf("\nQuotient : %d", n1 / n2);
    printf("\nRemainder : %d", n1 % n2);
    return 0;
}
    
