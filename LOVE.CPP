
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<string.h>

int main()
{

   char str[20],str1[6][7],str2[6][7];
   int row,col;
   clrscr();
   cout<<"Enter the name";
   gets(str);
   //strcpy(str,"Parents");
   clrscr();
   cout<<"Hey \n\t\t My dear "<<str;

   cout<<"\n\n";
   for(row=0;row<6;row++)
   {
     cout<<"\n\t\t";
     for(col=0;col<7;col++)
     {

       if((row==0)||(row==5))
	 cout<<"_";
       if((col==3)&&(row!=0)&&(row!=5))
	cout<<"   |";


       if(((row==0)&(col%3!=0))||((row==1)&&(col%3==0))||(row+col==8)||(row-col==2))
	 str1[row][col]='*';
       else
	 str1[row][col]=' ';


       if((col==0)||(col==6))
	 str2[row][col]='|';
       else
	 str2[row][col]=' ';
       if(row==5)
	 str2[row][col]='-';
     }
   }

     for(row=0;row<6;row++)
     {
      cout<<"\n\t\t\t\t";
      for(col=0;col<7;col++)
      {
	cout<<" "<<str1[row][col];
      }
     }


     for(row=0;row<6;row++)
     {
      cout<<"\n\t\t\t\t\t\t\t";
      for(col=0;col<7;col++)
      {
	cout<<" "<<str2[row][col];
      }
     }
     getch();
   return 0;
}
