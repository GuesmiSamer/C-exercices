#include <stdio.h>
#define l 50
#define c 20
main ()
{int m[l][c];
int i,j,n,y,x,trouve;
printf ("donner n   ");
scanf ("%d",&n);
printf ("donner y   ");
scanf ("%d",&y);
for ( i=0;i<n;i++)
{for ( j=0;j<y;j++)
{printf ("donnez l'element n° %d  %d   ",i,j);
scanf ("%d",&m[i][j]);
}
}
for ( i=0;i<n;i++)
{for ( j=0;j<y;j++)
{printf ("%d    ",m[i][j]);}
printf(" \n");}

}
