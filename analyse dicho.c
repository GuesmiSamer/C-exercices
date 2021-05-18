#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double f(double x){
double y;
y=(x+1);
return y;}
void dichotomie(){
int i ,n ;
double a,b,x,e,x1;
printf("\n donner a:");
scanf("%f" , &a);
printf("\n donner b:");
scanf("%f"  ,&b);
printf("donner e :");
scanf("%f",&e);
if (f(a)==0)
{
    printf("la solution est : %1f",a);
}
if (f(b)==0)
{
    printf("la solution est : %1f",b);
}
while (abs(b -a)>e)
{
    x1=(a+b)/2;
    if ((f(a)*f(x1))<0)

            b=x1;
    else a=x1;
    }if (f(a)*f(b)>0){
    printf("pas de solution dans cette intervalle ");

}


printf("%1f",x1);
}


int main ()
{

        dichotomie();

}
