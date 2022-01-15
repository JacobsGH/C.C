#include <stdio.h>
#include <math.h>

int main ()

{
float a, b;
int c,d;
a=5;
c=5;
printf("b=?");
scanf("%f",&b);
a=a+b-2;
printf("a=a+b-2 : a=%f ,b=%f\n",a,b);
a=5;
c=5;
printf("d=?");
scanf("%d",&d);
d=(c=c+1)-a+d;
printf("d=c-a+d (c=c+1) : a=%f ,b=%f c=%d\n", a,b,c);
a=5;
c=5;
a=a*(c=(c-1));
printf("a=a*c (c=c-1) : a=%f , c=%d\n",a,c);
a=5;
c=5;
printf("b=? and d=?");
scanf("%f",&b);
scanf("%d",&d);
d=d*((c=c/2)+(b=b-1)+(a=a/10));
printf("d=d*(c+b+a) (a=a/10, c=c/2, b=b-1) : a=%f c=%d b=%f d=%d\n",a,c,b,d);
printf("end");
getchar();
return 0;
}
