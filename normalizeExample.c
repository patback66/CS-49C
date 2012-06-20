#include <stdio.h>
#include <math.h>

void Normalize(float *x, float *y, float *z)
{
    float mag;
    mag = (*x)*(*x)+(*y)*(*y)+(*z)*(*z);
    mag = sqrt(mag);
    *x=(*x)/mag;
    *y=(*y)/mag;
    *z=(*z)/mag;
}

int main()
{
    float a,b,c;
    a = 10.0;
    b = 20.0;
    c = 15.0;
    Normalize(&a, &b, &c);
    printf("Vector is %f %f %f\n", a, b, c);
    return 0;
}
