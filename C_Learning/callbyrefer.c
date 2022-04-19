// call by value && call by referencce

// call by value dont affected by actual value must be use return

// call by reference affected actual value return optional, pass paremeters address of variable

#include <stdio.h>
void incr(int *);
int main()
{
    int a =10;

    incr(&a);

    printf("%d", a);
}

void incr(int *p)
{
    for(int i =0; i<5; i++)
    {
      (*p)++;

      printf("%d", (*p));
      printf("\n");
    }

}
