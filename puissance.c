#include <stdio.h>
int puissance(n, p)

{
    if(p==0)

    {
        return(1);

    }
    return(puissance(n, p-1)*n);
}
main()
{ int x,n,f;
printf ("donner x=");
scanf ("%d",&x);
printf ("donner n=");
scanf ("%d",&n);
f=puissance(x,n);
printf ("%d",f);

      }
