#include <stdio.h>
#include <conio.h>
main()
{ int x,i,f;
do
  {    printf ("donner x=");
      scanf ("%d",&x);}
      while (x<=0);
      i=1;
      f=1;
      while (i<=x) 
      {f=f*i;
      i=i+1;
      }
      printf (" le factoriel =%d ",f);
      getch();
      return 0 ;
      }
