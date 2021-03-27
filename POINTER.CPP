#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int size, large, small;
   int *p;
   cout<<"Enter the size of Array: ";
   cin>>size;
   p=new int[size];
   for (int i=0; i<size; i++)
      cin>>p[i];
   large=*p;
   small=*p;
   for (int j=0; j<size; j++)
      {
	 if (large<*(p+j))
	    large=p[j];
	 if (small>*(p+j))
	    small=p[j];
      }
   cout<<"Largest Element: "<<large<<"\nSmallest Element: "<<small;
   delete[]p;
   getch();
}