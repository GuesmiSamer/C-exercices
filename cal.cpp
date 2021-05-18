#include <stdio.h>
#include <conio.h>
float somme (float x,float y)
{float s;
s=x+y;
return s;}
float difference (float x,float y)
{float d;
d=x-y;
return d;}
float produit (float x,float y)
{float p;
p=x*y;
return p;}
float quotient (float  x,float y)
{float q;
if (y==0) {printf ("impossible");}
else {q=x/y;}
return q;}
main()
{ float s,d,p,q,x,y;
printf ("donner x=");
scanf ("%f",&x);
printf ("donner y=");
scanf ("%f",&y);
s=somme(x,y);
printf (" %.2f + %.2f =%.2f\n",x,y,s);
d=difference(x,y);
printf (" %.2f - %.2f =%.2f\n",x,y,d);
p=produit(x,y);
printf (" %.2f * %.2f =%.2f\n",x,y,p);
q=quotient(x,y);
printf (" %.2f / %.2f =%.2f\n",x,y,q);
getch ();
      return 0;
      }
