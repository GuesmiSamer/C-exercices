#include <stdio.h>
#include <conio.h>
int somme (int x,int y)
{int s;
s=x+y;
return s;}
int difference (int x,int y)
{int d;
d=x-y;
return d;}
int produit (int x,int y)
{int p;
p=x*y;
return p;}
float quotient (int x,int y)
{float q;
if (y==0) {printf ("impossible");}
else {q=(float)x/(float)y;}
return q;}
main()
{ int y,x,s,d,p; float q;
printf ("donner x=");
scanf ("%d",&x);
printf ("donner y=");
scanf ("%d",&y);
s=somme(x,y);
printf (" %d + %d =%d\n",x,y,s);
d=difference(x,y);
printf (" %d - %d =%d\n",x,y,d);
p=produit(x,y);
printf (" %d * %d =%d\n",x,y,p);
q=quotient(x,y);
printf (" %d / %d =%.2f\n",x,y,q);
getch ();
      return 0;
      }
