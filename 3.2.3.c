/*3.Дан массив. Вывести на экран сначала его неотрицательные элементы, затем отрицательные.*/
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define size 10
//------------------------------------------------
void vblvod(int res2[size]);
void vvod(int res3[size]);
//------------------------------------------------
int main()

{
system("color 2");
setlocale(LC_ALL, "Rus");
int mas[size]={1,-2,3,-4,5,6,-7,8,9,10};
int i,n;
double Sum1,Sum2;
vblvod(mas);
printf("неотрицательные элементы массива\n\n");
for (i=0;i!=size;i++)
{
if(mas[i]>=0) printf("%d\n",mas[i]);
}
printf("\nотрицательные элементы массива\n\n");
for (i=0;i!=size;i++)
{
if(mas[i]<0) printf("%d\n",mas[i]);
}
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
