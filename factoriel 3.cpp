#include <stdio.h>
#include <conio.h>
main()
{ int x,i,f;
do
  {    printf ("donner x=");
      scanf ("%d",&x);}
      while (x<=0);
      f=1;
      for (i=1; i<=x ; i++)
      {f=f*i;}
      printf (" le factoriel =%d ",f);
      getch();
      return 0 ;
      }
