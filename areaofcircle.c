#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double eddistance(int x1, int x2, int y1, int y2)
{
    double a = pow(x1 - x2, 2) + pow(y1 - y2, 2);
    double x = sqrt(a); 
    return x; // x = distance between the coordinates (x1,y1) and (x2,y2)
}
void areacir(int x1, int x2, int y1, int y2, double (*fptr)(int, int, int, int))
{
    float d = 3.14 * pow((*fptr)(x1, x2, y1, y2), 2);
    printf("The area of the circle of radius equal to the distance between two points is %f\n", d);
}
int main()
{
    double (*ptr)(int, int, int, int);
    ptr = eddistance;
    int x1, x2, y1, y2;
    printf("ENTER the first coordinate (x1,y1).\n");
    scanf("%d", &x1);
    scanf("%d", &y1);
    printf("ENTER the second coordinate (x2,y2).\n");
    scanf("%d", &x2);
    scanf("%d", &y2);
    areacir(x1, x2, y1, y2, ptr);

    return 0;
}
