#include <stdio.h>
#define max 50
int saisire (int n)
{do
{
printf ("donner la taille du tableau     ");
scanf ("%d",&n);
}
while (n<=0 || n>max);
return n;}
void remplire (int T[],int n)
{int i;
for (i=1;i<=n;i++)
{printf ("donnez l'element n° %d     ",i);
scanf ("%d",&T[i]);}}
void permute (int *a,int *b)
{int aux;
aux=*a;
*a=*b;
*b=aux;}
void tri (int n , int T[])
{int i;
int b;
do
{b=0;
for (i=0;i<=n-1;i++)
{if (T[i]>T[i+1]) {permute (&T[i],&T[i+1]);
b=1;}
}}
while (b==1);
}
void afficher (int n , int T[])
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
     }
