#include <stdio.h>
#define max 50

main ()
{int T[max];
int i,n,val,p=-1,d=-1;
do
{
printf ("donner la taille du tableau     ");
scanf ("%d",&n);
}
while (n<=0 || n>max);

for (i=0;i<n;i++)
{printf ("donnez l'element n° %d     ",i);
scanf ("%d",&T[i]);
}
printf("Elément à rechercher : ");
 scanf("%d", &val );
 for (i=0;i<n;i++)
           {if (T[i]==val)
           {
               if (p==-1) {p=i;}
               else {d=i;}
           }
}
if (p==-1) printf ("l'element n'existe pas");
else if (d==-1)  printf ("l'element existe une seule fois dans la position %d",p);
else  printf ("la premiere occurence est %d et la derniere est %d",p,d);
}











