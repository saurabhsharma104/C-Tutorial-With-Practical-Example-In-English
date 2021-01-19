#include<stdio.h>

int main()
{
   int array[3][3],array2[3][3],result[3][3],i,j;
   int n =3;

   // input first array....
   for(i =0;i<n;i++){
    for(j =0;j<n;j++){
        scanf("%d",&array[i][j]);
    }
   }
// input 2nd array....
   for(i =0;i<n;i++){
    for(j =0;j<n;j++){
        scanf("%d",&array2[i][j]);
    }
   }
// calculate the sum of the two array.....
   for(i =0;i<n;i++){
    for(j =0;j<n;j++){
        result[i][j] = array[i][j]+array[i][j];
    }
   }
// print the addition of the two array....
   for(i =0;i<n;i++){
        print("\n");
    for(j =0;j<n;j++){
        printf("\t%d",result[i][j]);
    }
   }
   return 0;
}
