#include <stdio.h>
#include <conio.h>
#define max 10
main()
{ int i,x;
for (i=0
;i<=max;i++)
{ if (i%2==0) {x=i%3;if (x==0) {printf ("%d divisible\n",i);} else {printf ("%d n'est pas divisible\n",i);}}}
getch();
return 0;}
