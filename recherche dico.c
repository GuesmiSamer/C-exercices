#include <stdio.h>
#define max 100
main()
{

 int T[10]={1,2,3,4,5,8,9,10,11,120};
  int VAL,I,N=10,POS,INF, MIL, SUP;
  printf("Elément à rechercher : ");
 scanf("%d", &VAL );
 INF=0;
 SUP=N-1;
 POS=-1;
 while ((INF<=SUP) && (POS==-1))
        {
         MIL=(SUP+INF)/2;
         if (VAL < T[MIL])
               SUP=MIL-1;
         else if (VAL > T[MIL])
               INF=MIL+1;
         else
               POS=MIL;
        }
 if (POS==-1)
     printf("La valeur recherchée ne se trouve pas dans le tableau.\n");
 else
     printf("La valeur %d se trouve à la position %d. \n",VAL, POS);
}
