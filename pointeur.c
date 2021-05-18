#include<stdio.h>
int main()
{
int i=100;
printf ("La variable i a comme adresse %d et contient la valeur suivante %d\n",&i,i);
int *pi=NULL;
pi=&i;
printf("le pointeur pi contient la valeur %d et pointe vers la valeur %d\n",pi,*pi);
*pi=200;
printf("le pointeur pi contient la valeur %d et pointe vers la valeur %d\n",pi,*pi);
printf ("La variable i a comme adresse %d et contient la valeur suivante %d\n",&i,i);
}
