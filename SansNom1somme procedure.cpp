#include <stdio.h>
#include <conio.h>
void somme (int a,int b)
{int i,s;
s=a+b;
printf ("la somme est %d",s);
}
main()
{int a,b;
printf ("donnez a    ");
scanf ("%d",&a);
printf ("donnez b    ");
scanf ("%d",&b);
somme (a,b);
getch();
return 0; }
