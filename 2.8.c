#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
setlocale(LC_ALL, "Rus");
double i,S,a,f,d,b,g;
float x;
g=1;
printf("������� x\n");
scanf("%f",&x);
printf("���� x=%f ,�� ",x);
a=x-1;
if(x>1)
{
	printf("x ������ � ���������� ���������� (x>1) � ");
	f=log(x);
	for(i=1;g>pow(3,-300);i++)
			{
			b=(pow(x,i))*i;
			d=pow(a,i);
			g=(d/b);
			S=S+g;
		}
		printf("S=%f  ",S);
		printf("f=ln(x)= %f",f); 
}
else
{
    printf("x<1 � ������� � �� ������ � ���������� ���������� (x>1).");
}
getchar();
return 0;
}
