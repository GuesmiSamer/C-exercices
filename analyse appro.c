#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int user_power,i=0,cnt=0,flag=0;
int coef[10]={0};
float x1=0,t=0;
float x2=0;
float e;

void main()
{


    printf("\n\tINTIAL X1---->");
    scanf("%f",&x2);
    printf("\n\t epsilon e---->");
    scanf("%f",&e);
    printf("\n ******************************************************");
    printf("\n ITERATION    X1    FX1      ");
    printf("\n **********************************************************");

    do
    {
            cnt++;
             x2=(exp(-x1)/3);
            x1=x2;

            printf("\n %d         %.3f  %.3f ",cnt,x1,x2);

    }while((fabs(x2 - x1))>=e);
    printf("\n\t LA SOLUTION DE L'EQUATION EST %f",x1);
    getch();
}
