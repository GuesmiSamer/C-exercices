#include <stdio.h>
#include <conio.h>
main()
{ int j,m,a,d;
d=0;
do 
{printf ("donner le jour\n");
scanf ("%d",&j);
d=d+1;}
while ((j<1)+(j>31));
do 
{printf ("donner le mois\n");
scanf ("%d",&m);
d=d+1;}
while ((m<1)+(m>12));
do 
{printf ("donner l'annee\n");
scanf ("%d",&a);
d=d+1;}
while ((a<1900)+(a>2017));
printf ("le jour est %d\n",j);
printf ("le jour est %d\n",m);
printf ("le jour est %d\n",a);
printf ("le nombre de donnees est %d\n",d);
getch();
return 0;}
