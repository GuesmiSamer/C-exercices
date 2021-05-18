#include <stdio.h>
#include <conio.h>
float remise (float m)
{float r;
if (m>=1000) {r=0.2*m;}
else if (m>=750) {r=0.1*m;}
else if (m>=500) {r=0.05*m;}
else {r=0;};
return r;}
main()
{ float r,m;
printf ("donner m=");
scanf ("%f",&m);
r=m-remise (m);
printf ("le montant apres la remise est %.2f",r);
getch ();
      return 0;
      }
