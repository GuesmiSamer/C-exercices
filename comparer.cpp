#include <stdio.h>
#include <conio.h>
void comparer (float a,float b, float c)
{float max=a;
if (b>max) {max=b;}
if (c>max) {max=c;}
printf ("le maximum est %.2f",max);
}
main ()
{float a,b,c;
printf ("donner la 1ére valeur");
scanf ("%f",&a);
printf ("donner la 2éme valeur");
scanf ("%f",&b);
printf ("donner la 3éme valeur");
scanf ("%f",&c);
comparer (a,b,c);
getch ();
return 0;
}
