// switch multi direction expression

// program to perform arthimetic operation in switch

#include <stdio.h>
int main()
{
    int a, b;

    char op;
    printf("Enter the values :");
    scanf("%d %d %c", &a, &b, &op);

    switch(op)
    {


case '+':
    printf("%d", a+b);

    default:
    printf("Wrong");
    }

}
