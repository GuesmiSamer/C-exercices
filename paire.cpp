#include <stdio.h>
#include <conio.h>
main()
{ int x;
      printf ("donner x=");
      scanf ("%d",&x);
      if ( x%2==0) 
      { printf ("nombre paire");}
      else { printf ("x est impaire"); }
      getch ();
      return 0;
      }
