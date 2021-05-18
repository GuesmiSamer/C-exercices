#include <stdio.h>
#include <conio.h>
#define max 50
int saisire (int n)
{do
{
printf ("donner la taille du tableau     ");
scanf ("%d",&n);
}
while (n<=0 || n>max);
return n;}
void remplire (int T[max],int n)
{int i;
for (i=1;i<=n;i++)
{printf ("donnez l'element n° %d     ",i);
scanf ("%d",&T[i]);}}
void permute (int *a,int *b)
{int aux;
aux=*a;
*a=*b;
*b=aux;}
void tri (int n, int T[max])
{int i,j,posmin;
     for (i=1;i<=n;i++)
     {posmin=i;
     for (j=i+1;j<=n;j++)
{if (T[j]< T[posmin]) {posmin=j;}}
if (!(posmin==i)) {permute (&T[i], &T[posmin]);}}}
void afficher (int n , int T[max])
{ int i;
for (i=1;i<=n;i++)
{printf ("T[ %d ]= %d \n    ",i,T[i]);}
}
main ()
{int T[max];
     int n;
     n=saisire(n);
     remplire (T,n);
     tri (n,T);
     afficher (n,T);
     getch ();
     return 0; }
