#include<stdio.h>
#include<stdlib.h>

int main()
{
   int *p;
   int n,i;
   printf("Enter the size of array.:");
   scanf("%d",&n);
   p = (int *) malloc(sizeof(int)*n);
   for(i =0;i<n;i++){
    scanf("%d",p+i);
   }
   for(i =0;i<n;i++){
    printf("\t%d",*(p+i));
   }

   return 0;
}
