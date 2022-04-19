// Functions

// int add () add function name ()--> Arguments or parameters int --> return type all these functions header
//{
 // function body
 //return-- go back all these function definition
//}
#include <stdio.h>

int add(int a, int b)
{
    //int c = a+b;
    //printf("%d", c);
    return a+b;
}
int main()
{
    int a, b, c;

    printf("Enter the a value :");
    scanf("%d", &a);

    printf("Enter the b value :");
    scanf("%d", &b);


   c= add(a, b);

    printf("%d", c);

}

