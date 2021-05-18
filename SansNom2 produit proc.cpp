#include <stdio.h>
#include <conio.h>
void produit (float a,float b)
{int i;float p;
p=a*b;
printf ("le produit est %.2f",p);
}
main()
{float a,b;
printf ("donnez a    ");
scanf ("%f",&a);
printf ("donnez b    ");
scanf ("%f",&b);
produit (a,b);
getch();
return 0; }
