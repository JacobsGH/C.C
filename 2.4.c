#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
setlocale(LC_ALL, "Rus");
int N,i;
float pr=1;
printf("¬ведите N\n");
scanf("%d",&N);
printf("≈сли N=%d ,то ",N);
if(N>0)
{
for(i=1;i<=N;i++)
{
pr*=1+(1/(pow(i,2)));
}
printf("произведение = %f\n",pr);
}
else
{
printf("N не натуральное и нельз€ вычислить произведение\n");
}
getchar();
return 0;
}
