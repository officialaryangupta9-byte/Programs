
//Program to find the Euclidean Distance.


#include <stdio.h>
#include <math.h>
int main() {
    int x1, x2, y1, y2;
    float Distance;
    printf("Enter the coordinates of the first point (x1, x2) : ");
    scanf("%d %d", &x1, &x2);
    printf("Enter the coordinates of the second point (y1, y2) : ");
    scanf("%d %d", &y1, &y2);
    Distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1,2));
    printf("The distance between the two points is : %f", Distance);
    return 0;
}
