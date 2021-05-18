#include <stdio.h>
#include <conio.h>
float moyenne (int n)
{ float m,x,s;
int i;
s=0;
for (i=1;i<=n;i++)
{printf ("donner la note de l'etudiant n°%d     ",i);
scanf ("%f",&x);
s=s+x;}
m=s/n;
return m;}
main ()
{int n; float m;
printf ("donnez le nbr d'etudiants");
scanf ("%d",&n);
m=moyenne (n);
printf ("la moyenne est %f ",m);
getch ();
return 0;}
