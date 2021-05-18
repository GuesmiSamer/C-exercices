#include <stdio.h>
int produit(int x, int y)
{
if (x > 0)

    return y+produit(x-1,y);
  else
    return 0;
}
main()
{ int x,y,f;
printf ("donner x=");
scanf ("%d",&x);
printf ("donner y=");
scanf ("%d",&y);
f=produit(x,y);
printf ("%d*%d = %d",y,x,f);

      }
