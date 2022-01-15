/*4.Дан массив на 50 элементов. Найти сумму элементов массива, кратных 7.*/
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define size 50
//------------------------------------------------
void vblvod(int res2[size]);
void vvod(int res3[size]);
//------------------------------------------------
int main()

{
system("color 2");
setlocale(LC_ALL, "Rus");
int mas[size]={1,2,3,-4,5,6,-7,8,9,10,70,7,14,7,14,14,21};
int i,n=1;
double Sum1=0,Sum2=0;
vblvod(mas);
for (i=0;i!=size;i++)
{
n=mas[i]%7;
if(n==0)
{
Sum1+=mas[i];
}
}
printf ("Сумма = %lf\n",Sum1);
getchar();
return 0;
}
//------------------------------------------------
void vblvod(int res2[size])
{
	int i;
    for (i=0;i!=size;i++)
	{
		printf("%d ",res2[i]);
	}
printf("\n");
}
//------------------------------------------------
void vvod(int res3[size])
{
	int i;
    for (i=0;i!=size;i++)
	{
		printf("Введите %d элемент массива ",i);
		scanf("%d",&res3[i]);
	}
printf("\n");
}
//------------------------------------------------
