#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
setlocale(LC_ALL, "Rus");
int N,i;
float pr=1;
printf("������� N\n");
scanf("%d",&N);
printf("���� N=%d ,�� ",N);
if(N>0)
{
for(i=1;i<=N;i++)
{
pr*=1+(1/(pow(i,2)));
}
printf("������������ = %f\n",pr);
}
else
{
printf("N �� ����������� � ������ ��������� ������������\n");
}
getchar();
return 0;
}
