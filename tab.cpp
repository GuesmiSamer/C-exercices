#include <stdio.h>
#define max 50

main ()
{float T[max];
int i,n;
do
{
printf ("donner la taille du tableau     ");
scanf ("%d",&n);
}
while (n<=0 || n>max);

for (i=0;i<n;i++)
{printf ("donnez l'element n° %d     ",i);
scanf ("%f",&T[i]);
}

}












