
//program to find whether a number is even or odd.


#include <stdio.h>
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    (n%2==0) ? printf("Number is even") : printf("Number is odd");
    return 0;
}
