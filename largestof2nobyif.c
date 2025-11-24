
//Program to find the Largest of two numbers using if statement.


#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);
    if( n1 > n2)
    printf("%d is the Largest number.", n1);
    else 
    printf("%d is the Largest number.", n2);
    return 0;
}
