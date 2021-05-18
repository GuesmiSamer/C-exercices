#include <stdio.h>
#include <conio.h>
main()
{ int x;
float a,b,n;

printf ("donner a");
scanf ("%f",&a);
printf ("donner b");
scanf ("%f",&b);
printf ("choix de l'operation/n");
printf ("1=+| 2=- | 3=* | 4=/ "); 
scanf ("%d",&x);
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

