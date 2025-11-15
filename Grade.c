
//Program to find the grade obtained on the basis of marks obtained.


#include <stdio.h>
int main() {
    int M;
    printf("Enter the number of marks obtained : ");
    scanf("%d", &M);
    if (M > 90)
    printf("You got A+");
    else if (M > 80)
    printf("You got A");
    else if (M > 70 )
    printf("You got B");
    else if (M > 60)
    printf("You got C");
    else if (M >= 50)
    printf("You got D");
    else 
    printf("You failed");
    return 0;
}
