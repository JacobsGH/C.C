#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
setlocale(LC_ALL, "Rus");
float a,b,r;
printf("������� ��� ����� ����� \n");
scanf("%f",&a);
scanf("%f",&b);
printf("���� ������ ����� = %.0f � ������ ����� = %.0f ,�� \n",a,b);
 	if (a>0 && b>0 && a>b )
{
    printf("��� ����� ������������ � ������� �� ��� = %.0f \n",a);
	r=(a+b)/2;
    printf("%.1f=�������� ��������������� ������� � ������� �����",r);
    getchar();
}
    else if(a>0 && b>0 && a<b )
{
    printf("��� ����� ������������ � ������� �� ��� = %.0f\n",b);
	r=(a+b)/2;
    printf("%.1f=�������� ��������������� ������� � ������� �����",r);
    getchar();
}
    else if(a<0 && b<0 && a<b)
{
    printf("��� ����� ������������ � ������� �� ��� = %.0f, ������ � ���� ���� �������� �� ��������������� \n",a);
    a=a*-1;
    printf("������� ����� ���������� %.0f",a);
    getchar();
}
    else if(a<0 && b<0 && a>b)
{
    printf("��� ����� ������������ � ������� �� ��� = %.0f, ������ � ���� ���� �������� �� ���������������\n",b);
	b=b*-1;
    printf("������� ����� ���������� %.0f",b);
    getchar();
}
    else
{
    printf("�� ������� �� ���� �� �������, ������ ������ ����� ��������� \n");
	a=a*2;
    b=b*2;
    printf("����� �������� ����� %.0f � %.0f",a,b);
    getchar();
}
	getchar();
	return 0;
}
