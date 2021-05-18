#include <stdio.h>
#include <conio.h>
void mois (int m)
{switch (m)
{
case 1: {printf ("janvier ne contient pas 30 jours");
break;}
case 2: {printf ("fevrier ne contient pas 30 jours");
break;}
case 3: {printf ("mars ne contient pas 30 jours");
break;}
case 4: {printf ("avril contient  30 jours");
break;}
case 5: {printf ("mai ne contient pas 30 jours");
break;}
case 6: {printf ("juin contient  30 jours");
break;}
case 7: {printf ("juillet ne contient pas 30 jours");
break;}
case 8: {printf ("aout ne contient pas 30 jours");
break;}
case 9: {printf ("septembre contient  30 jours");
break;}
case 10: {printf ("octobre ne contient pas 30 jours");
break;}
case 11: {printf ("novembre  contient  30 jours");
break;}
case 12: {printf ("decembre ne contient pas 30 jours");
break;}
default : {printf ("mois invalide");
break;}
}
}
main ()
{int m;
printf ("donnez le mois ");
scanf ("%d",&m);
mois (m);
getch ();
  return 0;
} 
