#include <stdio.h>
#include <math.h>
#include <locale.h>
//----------------------------------------------------------------
int main()

{
setlocale(LC_ALL, "Rus");
float t,s,f;
printf("������� s � t \n");
scanf("%f",&t);
scanf("%f",&s);
	if (s>4)
{
    printf("���� s=%f, �� s>4 � \n",s);
	f=3*t-1;
    printf("f(t,s)=3t-1=%f",f);
    getchar();
}
    else if(s<=4 && t!=0)
{
    printf("���� s=%f � t=%f , �� 4<=s � t!=0 \n",s,t);
	f=sqrt(fabs((t-s)));
    printf("f(x,y)=sqrt(fabs((t-s)))=%f",f);
    getchar();
}
	else
{
	printf("���� s=%f � t=%f ,�� \n",s,t);
	f=s+2;
	printf("f(x,y)=s+2=%f",f);
	getchar();
}
	getchar();
	return 0;
}
//----------------------------------------------------------------
