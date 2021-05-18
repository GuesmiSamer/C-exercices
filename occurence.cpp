#include <stdio.h>
#include <conio.h>
#define N 10 
main ()
{int A[N]={6,7,8,9,1,0,3,2,5,4};
 int    B[N]={2,7,1,4,1,9,6,2,8,4};
           int i,nb;
           nb=0;
           for (i=0;i<=N-1;i++)
           {if (A[i]==B[i]) {nb=nb+1;}}
           printf ("nb = %d ",nb);
           
getch ();
return 0;}
