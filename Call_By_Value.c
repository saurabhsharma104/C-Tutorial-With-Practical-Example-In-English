#include<stdio.h>

void display(int, int);
int main()
{
   int a =5,b =6;
   display(a,b);

   return 0;
}

void display(int a, int b)           // call by value...
{

    printf("Your value are :  ");
    printf("%d\t%d\n",a,b);
}
