#include <stdio.h>
#include <locale.h>

int main() 

{
setlocale(LC_ALL, "Rus");
int n, i;
printf("������� ����������� ����� N\n");
scanf("%d", &n);
while (n > 1) 
{
	 printf("������������ ������� ������������ ������� �� ");
	i = 2;
    while (1) 
		{
            if (n%i == 0) 
			{
                n = n / i;
                printf("%d ", i);
            }
            else 
			i += 1;
        }
}
getchar();
return 0;
}
