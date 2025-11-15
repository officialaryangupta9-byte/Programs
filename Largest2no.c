
//Program to find the largest of two no.


#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter the value of n1 : ");
    scanf("%d", &n1);
    printf("Enter the value of n2 : ");
    scanf("%d", &n2);
    (n1>n2) ? printf("n1 is the largest number.") : printf("n2 is the largest number.");
    return 0;
}
