
//Program to find area and perimeter of a circle.


#include <stdio.h>
int main() {
    float r, pi = 3.14, a, p;
    printf("Enter the radius of circle : ");
    scanf("%f", &r);
    printf("The area of circle is : %.3f", pi*r*r);
    printf("\nThe perimeter of circle is : %.3f", pi*2*r);
    return 0;
}
