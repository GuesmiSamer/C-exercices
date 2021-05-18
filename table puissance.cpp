#include <stdio.h>
#include <conio.h>
#define max 50
main ()
{float T[max];
int i,s;
float p,a;
printf ("donner la puissance i     ");
scanf ("%d",&i);
printf ("donner la valeur de a    ");
scanf ("%f",&a);
p=a;
for (s=1;s<=i;s++)
{T[s]=p;
{printf ("%.2f a la puissance %d = %.2f \n",a,s,T[s]);}
p=p*a;}

getch ();
return 0;}
