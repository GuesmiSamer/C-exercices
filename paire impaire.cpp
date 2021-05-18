#include <stdio.h>
#include <conio.h>
int paire (int x)
{ int s;
if ( x%2==0) 
      {s=0;}
      else { s=1; }
      return s;}
main()
{ int x;
      printf ("donner x=");
      scanf ("%d",&x);
if (paire(x)==0) {printf ("nombre paire ");}
else {printf ("impaire");}    
      getch ();
      return 0;
      }
