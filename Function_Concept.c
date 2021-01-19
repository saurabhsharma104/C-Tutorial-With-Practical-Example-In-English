#include<stdio.h>
void display(int a, int b);
int main()
{
   int a =5,b =6;
    display(a,b);
   printf("I am inside the main function.");
   return 0;
}

void display(int a, int b)
{

    printf("I am inside the display function.\n");
    printf("%d\t%d\n",a,b);
}
