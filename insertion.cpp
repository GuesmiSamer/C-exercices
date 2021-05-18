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
void decaler (int *x, int T[max], int *mp)
{ while (T[*x-1]>*mp)
{T[*x]=T[*x-1];
*x=*x-1;}}
void tri (int n, int T[max])
{int i,c,temp;
for (i=2;i<=n;i++)
{temp=T[i];
c=i;
decaler (&c,T,&temp);
T[c]=temp;
}}










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
