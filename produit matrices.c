#include <stdio.h>
#define l 50
#define c 20
main()
{

 int L[l][c];
 int S[l][c];
 int R[l][c];
 int I, J, K,N, M, X;
 printf("Nombre de lignes de  L");
 scanf("%d", &N );
 printf("Nombre de colonnes de L ");
 scanf("%d", &M );
 for (I=0; I<N; I++)
    for (J=0; J<M; J++)
        {
         printf("L[%d][%d] : ",I,J);
         scanf("%d", &L[I][J]);
        }
 printf("Nombre de colonnes de S  : ");
 scanf("%d", &X );
 for (I=0; I<M; I++)
    for (J=0; J<X; J++)
        {
         printf("S[%d][%d] : ",I,J);
         scanf("%d", &S[I][J]);
        }

 for (I=0; I<N; I++)
     for (J=0; J<X; J++)
         {
          R[I][J]=0;
          for (K=0; K<M; K++)
               R[I][J] += L[I][K]*S[K][J];
         }

 printf("Matrice résultat C :\n");
 for (I=0; I<N; I++)
    { printf("\n");
     for (J=0; J<X; J++)
          printf("%7d", R[I][J]);

    }

}
