#include <stdio.h>
#include <conio.h>
int factoriel (int x)
{int f,i;
f=1;
for (i=1;i<=x;i++)
{f=f*i;}
return f;}
main()
{ int x,f;
printf ("donner x=");
scanf ("%d",&x);
f=factoriel(x);
printf ("%d! = %d",x,f);
getch ();
      return 0;
      }
