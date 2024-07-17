#include <stdio.h>
#include <stdlib.h>

int main()
{   double base;
    double height;
    double area;
    printf("enter the length of base \n");
    scanf("%lf",&base);
     printf("enter the length of height \n");
     scanf("%lf",&height);
      area = 0.5 * base * height;
     printf("the area of triangle = %lf",area) ;

    return 0;
}
