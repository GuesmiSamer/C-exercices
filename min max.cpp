#include <stdio.h>
#include <conio.h>
main()
{ int max,min,x;
max=0;
printf ("donner votre entier");
scanf ("%d",&x);
min=x;
do 
{
printf ("donner votre entier");
scanf ("%d",&x);
if (x>max) {max=x;}
else if (x<min) {min=x;}
} while (!(x==0));
printf ("le max est %d\n",max);
printf ("le min est %d\n",min);
getch ();
      return 0;
      }
