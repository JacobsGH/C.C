/*4.��� ������ �� 20 ���������.
 �������� ���������, ����������� �������� �������.*/
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
//--------------------------------------
void vvod(int res3[20]);
void invert(int res4[20]);
void vblvod(int res2[20]);
//--------------------------------------
int main()

{
system("color 2");
setlocale(LC_ALL, "Rus");
int res1[20];
vvod(res1);
printf("�� �������� ������ = ");
vblvod(res1);
invert(res1);
printf("����� �������� ������ = ");
vblvod(res1);
getchar();
return 0;
}
//--------------------------------------
void vvod(int res3[20])
{
	int i;
    for (i=0;i!=20;i++)
	{
		printf("������� %d ������� ������� ",i);
		scanf("%d",&res3[i]);
	}
printf("\n");
}
//--------------------------------------
void vblvod(int res2[20])
{
	int i;
    for (i=0;i!=20;i++)
	{
		printf("%d ",res2[i]);
	}
printf("\n");
getchar();
}
//--------------------------------------
void invert(int res4[20])
{
    int res5[20],i;
        for (i=0;i!=20;i++)
	{
        res5[i]=res4[i];
	}
        for (i=0;i!=20;i++)
	{
        res4[i]=res5[(19-i)];
	}
}
//--------------------------------------
