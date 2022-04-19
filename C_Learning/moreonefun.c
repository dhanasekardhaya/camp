#include <stdio.h>

void inter(int *, int *);

int main()
{
    int a, b;

    printf("Enter the a value:");

    scanf("%d",&a);

    printf("Enter the b value:");

    scanf("%d",&b);

    inter(&a, &b);

    printf("%d, %d", a, b);
    //printf("%d", b);
}

void inter(int *p1, int *p2)
{
    int t = *p1;

    *p1 = *p2;

    *p2 = t;
}
