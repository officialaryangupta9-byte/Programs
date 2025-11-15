
//Program for incremental operator.


#include <stdio.h>
int main() {
    int x, y, z, a, b;
    x = 5;
    y = x++;
    z = ++x;
    printf("%d\n", y);   
    printf("%d\n", z);   
    printf("%d\n", y+z); 
    a = y++;
    b = ++z;
    printf("%d\n", a);   
    printf("%d\n", b);   
    return 0;
}
