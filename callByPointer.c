#include <stdio.h>

int n = 20;

void func1(int i)
{

    i = i + 10;
}

void func2(int *r)
{
    *r = *r + 20;
}

int main()
{
    func1(n);
    printf("n is %d\n", n);

    func2(&n);
    printf("n is %d\n", n);

    return 0;
}
