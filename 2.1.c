#include <stdio.h>
#include <math.h>
#include <locale.h>
//----------------------------------------------------------------
int main()

{
setlocale(LC_ALL, "Rus");
float t,s,f;
printf("Введите s и t \n");
scanf("%f",&t);
scanf("%f",&s);
	if (s>4)
{
    printf("Если s=%f, то s>4 и \n",s);
	f=3*t-1;
    printf("f(t,s)=3t-1=%f",f);
    getchar();
}
    else if(s<=4 && t!=0)
{
    printf("Если s=%f и t=%f , то 4<=s и t!=0 \n",s,t);
	f=sqrt(fabs((t-s)));
    printf("f(x,y)=sqrt(fabs((t-s)))=%f",f);
    getchar();
}
	else
{
	printf("Если s=%f и t=%f ,то \n",s,t);
	f=s+2;
	printf("f(x,y)=s+2=%f",f);
	getchar();
}
	getchar();
	return 0;
}
//----------------------------------------------------------------
