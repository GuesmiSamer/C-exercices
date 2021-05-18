#include <stdio.h>
#include <conio.h>
void puissance (float x,int n)
{int i;
float p;
p=1;
for (i=1;i<=n;i++)
{p=p*x;}
printf ("%.2f a la puissance %d=%.2f",x,n,p);}
main()
{ float x;
int n;
do
{printf ("donner x=");
scanf ("%f",&x);}
while (x<0);
printf ("donner n=");
scanf ("%d",&n);
puissance (x,n);
getch ();
      return 0;
      }
