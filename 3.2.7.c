/*7.В массиве хранится информация о максимальной скорости каждой из 40 марок легковых автомобилей. 
Определить скорости двух самых быстрых автомобилей. 
(Решить задачу без использования двойного прохода по массиву).*/
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define size 40
//------------------------------------------------
void vblvod(int res2[size]);
void sortirovkaVborom(int a[]);
//------------------------------------------------
int main()

{
system("color 2");
setlocale(LC_ALL, "Rus");
int mas[size]={20,34,456,76,43,89,90,435,32,567,567,645,};
printf("Скорость всех машин\n");
vblvod(mas);
sortirovkaVborom(mas);
printf("Скорость самых быстрых машин %d и %d",mas[size-1],mas[size-2]);
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
void sortirovkaVborom(int a[])
{
	int i,j,k,n=size;
	double min;
	for(i=0;i<n-1;i++)
	{
		k=i;
		min=a[i];
		for(j=i+1;j<n;j++)
		if (a[j]<min)
		{
			k=j;
			min=a[j];
		}
		a[k]=a[i];
		a[i]=min;
	}
}
//------------------------------------------------
