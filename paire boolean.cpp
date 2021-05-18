#include <stdio.h>
#include <conio.h>
bool paire (int x)
{ bool b;
if ( x%2==0) 
      {b=false;}
      else { b=true; }
      return b;}
main()
{ int x;
      printf ("donner x=");
      scanf ("%d",&x);
if (paire(x)==false) {printf ("nombre paire ");}
else {printf ("impaire");}    
      getch ();
      return 0;
      }
