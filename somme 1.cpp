#include <stdio.h>
#include <conio.h>
int somme (int a,int b)
{int i,s;
s=0;
for (i=a;i<=b;i++)
{s=s+i;}
return s;
}
main()
{int a,b;
printf ("donnez a");
scanf ("%d",&a);
printf ("donnez b");
scanf ("%d",&b);
printf ("la somme est %d",somme(a,b));
getch();
return 0; }
