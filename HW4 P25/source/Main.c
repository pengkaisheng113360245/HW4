#include <stdio.h>
#include <stdlib.h>

void addbyone(int* xref);

int main()
{
    int x = 100;
    addbyone(&x);
    printf("x=%d\n", x);
    system("pause");
    return 0;
}

void addbyone(int* xref)
{
    (*xref)++;
    printf("xref=%d\n", *xref);
}
