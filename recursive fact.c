#include <stdio.h>
int factoriel(long N)
{
if(N<=1)
return 1;
else
return(N*factoriel(N-1));
}
main()
{ int x,f;
printf ("donner x=");
scanf ("%d",&x);
f=factoriel(x);
printf ("%d! = %d",x,f);

      }
