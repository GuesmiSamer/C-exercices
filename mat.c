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
printf ("donner x  ");
scanf ("%d",&x);
i=0;
trouve=0;
while(i<n && !trouve)
{j=0;
    while(j<y && !trouve)

{   if (m[i][j]==x )
trouve=1;
else

    j++;}
 i++;
 }
if (trouve)
{
    printf("existe ");

}
else {printf("n existe pas ");}

}
