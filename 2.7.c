#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
setlocale(LC_ALL, "Rus");
double S=1,f,d,b,i_2,n_2,a_2=1;
float a,x;
int i,fact;
printf("������� a � x \n");
scanf("%f",&a);
scanf("%f",&x);
printf("���� a=%f , x=%f ,�� ",a,x);
if(x>=0.1)
	{
		if(x<=1)
		{
			printf("x ������ � ���������� ����������(0,1<=x<=1) � ");
			f=pow(a,x);
			for(i=1;a_2>pow(3,-300);i++)
			{	
					fact=1;
					n_2=i;
					for (i_2=1;i_2<=n_2;i_2++)
					{
    					fact*=i_2;
					}
    				d=pow((x*(log(a))),n_2);
					b=fact;
					a_2=(d/b);
					S=S+a_2;
			}
			printf("S=%f ",S);
			printf("f=a^x=%f",f);
			getchar();
		}
		else
		{
			printf("x>1 ������� � �� ������ � ���������� ����������(0,1<=x<=1).");
		}
	}
else
	{
		printf("x<0,1 ������� x �� ������ � ���������� ����������(0,1<=x<=1).");
	}
getchar();
return 0;
}
