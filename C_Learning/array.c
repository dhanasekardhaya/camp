#include <stdio.h>

int main()
{
    int a[10], b=0, i=0;

    printf("Enter the array values :");
    for(i=0; i<sizeof(a)/sizeof(a[i]); i++)
    scanf("%d", &a[i]);


    b=sizeof(a)/sizeof(a[0]);
    printf("%d", b);
    for(int i=0;i<b; i++)
    {
        printf("\n%d%", a[i]);


    }


}
