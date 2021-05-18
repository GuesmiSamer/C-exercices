#include <stdio.h>
#include <conio.h>
int partie (float n)
{int x;
x=int(n);
return x;
}
main ()
{float n;
printf ("donnez n");
scanf ("%f",&n);
printf ("la partie entiere est %d",partie(n));
getch ();
      return 0;
      }
