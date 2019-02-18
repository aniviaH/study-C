#include <stdio.h>

#define M 10

int main()
{
    int a = 4;

    //const int *p;
    //int const *p;
    //int * const p;
    const int * const p;

    p = &a;
    //*p = &a;

    //p = 10;
    //*p = 10;


    printf("%d", *p);
}
