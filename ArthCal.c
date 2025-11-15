
//Program to perform Arithmetic calculation using float function.


#include <stdio.h>
int main() {
    float n1, n2, rem;
    printf("Enter first number : ");
    scanf("%f", &n1);
    printf("Enter second number : ");
    scanf("%f", &n2);
    printf("Sum : %f", n1 + n2);
    printf("\nDifference : %f", n1 - n2);
    printf("\nProduct : %f", n1 * n2);
    printf("\nQuotient : %f", n1 / n2);
    printf("\nRemainder : %f", fmod(n1, n2));
    return 0;
}
    
