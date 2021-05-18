#include <stdio.h>
#include <conio.h>
main()
{ 
float n,a,b;
char x;
printf ("donner a");
scanf ("%f",&a);
printf ("donner b");
scanf ("%f",&b);

printf ("choix de l'opperation");
scanf ("%s",&x);

switch (x)
{ case ('+') : { n=a+b;
printf ("le resultat est %.2f",n);
break;}
case ('-') : { n=a-b;
printf ("le resultat est %.2f",n);
break;}
case ('*') : { n=a*b;
printf ("le resultat est %.2f",n);
break;}
case ('/') : { if (!b==0) 
 {n=a/b;
printf ("le resultat est %.2f",n);}
else {printf ("impossible");}
break;}
}
 getch();
return 0;
}

