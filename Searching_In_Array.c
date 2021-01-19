#include<stdio.h>

int main()
{
   int array[10] = {1,2,3,4,5,6,7,8,9};
   int search_number;
   printf("Enter the search Number :");
   scanf("%d",&search_number);
   for(int i =0;i<10;i++){
    if(search_number == array[i]){
          printf("Your Search Number %d are present in the array at the %d position.",search_number,i+1);
          return 0;
    }
   }
   printf("Number are not present in the array.");
   return 0;
}
