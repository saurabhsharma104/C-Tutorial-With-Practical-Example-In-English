// Working of arithmetic operators

#include <stdio.h>
int main()
{
    int a = 9,b = 4, c;
    c = a+b;
    printf("a+b = %d \n",c);   // 13
    c = a-b;
    printf("a-b = %d \n",c);// 5
    c = a*b;
    printf("a*b = %d \n",c); // 36
    c = a/b;
    printf("a/b = %d \n",c);  // 2
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c); // 1

    return 0;
}
