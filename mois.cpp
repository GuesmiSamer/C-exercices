#include <stdio.h>
#include <conio.h>
void mois (int n)
{if ((n==4)+ (n==6) + (n==9)+ (n==11)) {printf ("le mois %d contient 30 jours",n);
}
else {printf ("le mois %d ne contient pas 30 jours",n);}}
main ()
{int m;
printf ("donnez le mois ");
scanf ("%d",&m);
mois (m);
getch ();
  return 0;
} 
