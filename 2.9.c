#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
setlocale(LC_ALL, "Rus");
float S,b,n,i,a,x=1;
printf("������� ����������� ����� N\n");
scanf("%f",&n);
printf("���� ����������� ����� N=%f ,�� ",n);
if (n>1)
{
    n--;
for(i=1;i<=n;i++)
{
for(a=0;a<=i;a++)
{
    x*=(i+1);
}
	S=S+(1/x);
	x=1;
}
getchar();
S++;
printf("S=%f\n",S);
}
else if(n==1)
{
printf("S=1");
getchar();
}
else
{
printf("N �� �������� ����������� ������",n);	
}
getchar();
return 0;
}
