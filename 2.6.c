#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
setlocale(LC_ALL, "Rus");
int x,p=1;
printf("������� ����������� �����\n");
scanf("%d",&x);
printf("���� ���������� ����� ��� %d ,�� ��� ����� ���� �������� � �������� ������� ��������� ����� ",x);
while(p<=x)p*=10;
    {
        p/=10;
        x =  x%p +  (x%10)*p + x/p - x%10;
	}
getchar();
printf("%d\n",x);
getchar();
return 0;
}
