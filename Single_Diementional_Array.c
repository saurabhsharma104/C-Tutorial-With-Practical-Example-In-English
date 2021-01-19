#include<stdio.h>

int main()
{
    int array[10];
    int i;
    for(i =0;i<10;i++){
        scanf("%d",&array[i]);
    }
    for(i =0; i<10;i++){
        printf("\t%d",array[i]);
    }
   return 0;
}
