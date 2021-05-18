#include <stdio.h>
#define max 50
void remplir (int T[],int n,int i)
{if(i<n)
{printf ("donner l'element %d \n",i);
scanf("%d",&T[i]);
remplir (T,n,i+1);
}
}
void afficher(int T[],int n,int i)
{if(i<n)
{printf (" l'element T[%d]=%d\n",i,T[i]);
afficher (T,n,i+1);
}
}
void affichinv(int T[],int n,int i)
{if(i>=0)
{printf (" **l'element T[%d]=%d\n",i,T[i]);
affichinv (T,n,i-1);
}
}
int somme(int T[],int n,int i,int s)
{
if(i==n) {
return s;}
else
{s=s+T[i];

return somme (T,n,i+1,s);
}
}
int exist(int T[],int n,int i,int elm)
{int x;
if(i<n){
    if(T[i]==elm) {
x=1;
return x;}
else
{return exist (T,n,i+1,elm);
}

}

}
main()
{
    int T[10];
int i,n,s,elm,x;
do
{
printf ("donner la taille du tableau     ");
scanf ("%d",&n);
}
while (n<=0 || n>max);
remplir (T,n,0);
afficher (T,n,0);
i=n-1;
affichinv(T,n,i);
s=somme (T,n,0,0);
printf ("s= %d \n",s);
printf ("donner elm    ");
scanf ("%d",&elm);
x=exist(T,n,0,elm);
if (x==1) printf ("trouvé");
else printf ("non trouvé");

}

