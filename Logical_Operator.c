// Working of logical operators.....

#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result); // true

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);  // false

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);   // true

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);  // false

    result = !(a != b);
    printf("!(a != b) is %d \n", result);     // true

    result = !(a == b);
    printf("!(a == b) is %d \n", result); //false

    return 0;
}
