/*2.�������� ������� ���������� ����������� ������� � ����������, 
������ ������� �� ������, ������ ����������� �� ������ �������� �������. */
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define size 10
//----------------------------------------------------------------
void kl(int res[]);
void random(int res[]);
void print(int res[]);
void searchMin(int res[]);
//----------------------------------------------------------------
int main()

{
system("color 2");
setlocale(LC_ALL, "Rus");
int res1[size];
kl(res1);
print(res1);
searchMin(res1);
getchar();
return 0;
}
//----------------------------------------------------------------
void kl(int res[]) /*���������� ����������� ������� � ����������*/
{
	int i;
	for (i=0;i!=size;i++)
	{
		printf("������� %d ����� ������� ",i); 
		scanf("%d",&res[i]);
	}
printf("\n");
getchar();
}

void random(int res[]) /*���������� ���������� ������� �� 100*/
{
	int i,n;
	srand(time(0));
    for (i = 0; i < n; i++) 
	{
        res[i] = rand() % 100;
        printf("%d ", res[i]);
    }
putchar('\n');
getchar();
}

void print(int res[]) /*������ ������� �� ������*/
{
	printf("������:");
    int i;
    for (i=0;i!=size;i++)
	{
		printf("%d ",res[i]);
	}
printf("\n");
}

void searchMin(int res[]) /*������ ����������� �� ������ �������� �������. */
{
int min=res[0],i,mod;
for (i=0; i<size;i++)
    {
    if (res [i]<0)
    {
    	mod=res[i]*-1;
    	if (mod<min)
    	{
    		min=mod;
		}
	}
    if (res[i]<min && res[i]>-1)
    {
    min=res[i];
    }
}
    printf("\n����������� ������� ������� �� ������ = %d\n",min);
}
getchar();
//----------------------------------------------------------------
