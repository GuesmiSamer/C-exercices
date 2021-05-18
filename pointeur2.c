 #include<stdio.h>
  int main()
   {
      int a = 1;
      int b = 2;
      int c = 3;
      int *p1, *p2;
      printf("a=%d,b=%d,c=%d,&a=%d,&b=%d,&c=%d,p1=%d,p2=%d \n",a,b,c,&a,&b,&c,p1,p2);
      p1=&a;
        printf("a=%d,b=%d,c=%d,&a=%d,&b=%d,&c=%d,p1=%d,p2=%d \n",a,b,c,&a,&b,&c,p1,p2);
      p2=&c;
         printf("a=%d,b=%d,c=%d,&a=%d,&b=%d,&c=%d,p1=%d,p2=%d \n",a,b,c,&a,&b,&c,p1,p2);
      *p1=(*p2)++;
           printf("a=%d,b=%d,c=%d,&a=%d,&b=%d,&c=%d,p1=%d,p2=%d \n",a,b,c,&a,&b,&c,p1,p2);
      p1=p2;
          printf("a=%d,b=%d,c=%d,&a=%d,&b=%d,&c=%d,p1=%d,p2=%d \n",a,b,c,&a,&b,&c,p1,p2);
      p2=&b;
           printf("a=%d,b=%d,c=%d,&a=%d,&b=%d,&c=%d,p1=%d,p2=%d \n",a,b,c,&a,&b,&c,p1,p2);
      *p1-=*p2;
          printf("a=%d,b=%d,c=%d,&a=%d,&b=%d,&c=%d,p1=%d,p2=%d \n",a,b,c,&a,&b,&c,p1,p2);
      ++*p2;
          printf("a=%d,b=%d,c=%d,&a=%d,&b=%d,&c=%d,p1=%d,p2=%d \n",a,b,c,&a,&b,&c,p1,p2);
      *p1*=*p2;
          printf("a=%d,b=%d,c=%d,&a=%d,&b=%d,&c=%d,p1=%d,p2=%d \n",a,b,c,&a,&b,&c,p1,p2);
      a=++*p2**p1;
           printf("a=%d,b=%d,c=%d,&a=%d,&b=%d,&c=%d,p1=%d,p2=%d \n",a,b,c,&a,&b,&c,p1,p2);
      p1=&a;
         printf("a=%d,b=%d,c=%d,&a=%d,&b=%d,&c=%d,p1=%d,p2=%d \n",a,b,c,&a,&b,&c,p1,p2);
      *p2=*p1/=*p2;
         printf("a=%d,b=%d,c=%d,&a=%d,&b=%d,&c=%d,p1=%d,p2=%d \n",a,b,c,&a,&b,&c,p1,p2);
      return 0;
   }
