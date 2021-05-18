#include <stdio.h>
#include <conio.h>
void paire (int x)
{if ( x%2==0) 
      { printf ("nombre paire");}
      else { printf ("x est impaire"); }}
main()
{ int x;
      printf ("donner x=");
      scanf ("%d",&x);
      paire (x);
      getch ();
      return 0;
      }
