#include <stdio.h>
#include <conio.h>
main()
{ int x;
float a,b,n;

printf ("donner a");
scanf ("%f",&a);
printf ("donner b");
scanf ("%f",&b);
do
{printf ("choix de l'operation");
printf ("1=+| 2=- | 3=* | 4=/ "); 
scanf ("%d",&x);}
while ((x<=0) +(x>4));
switch (x)
{ case 1 : { n=a+b;
printf ("le resultat est %.2f",n);
break;}
case 2 : { n=a-b;
printf ("le resultat est %.2f",n);
break;}
case 3 : { n=a*b;
printf ("le resultat est %.2f",n);
break;}
case 4 : { if (!b==0)  {n=a/b;
printf ("le resultat est %.2f",n);}
else {printf ("impossible");}
break;}
} getch();
return 0;
}

