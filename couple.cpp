#include <stdio.h>
#include <conio.h>
main()
{ int j,i;
for (i=1;i<=5;i++)
{for (j=1;j<=i;j++)
{printf ("(%d,%d)",i,j);
}printf ("\n");}
getch();
return 0;}
