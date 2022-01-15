/*2.Дан массив целых чисел. Выяснить, верно ли, что сумма квадратов элементов массива есть пятизначное число.*/
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define size 10
//------------------------------------------------
void vblvod(int res2[size]);
//------------------------------------------------
int main()

{
system("color 2");
setlocale(LC_ALL, "Rus");
int mas[size]={1,2,378,4,5,600,7,865,9,10};
int i,n;
double Sum1=0,Sum2=0;
for (i=0;i!=size;i++)
{
 Sum1=mas[i]*mas[i];
 Sum2+=Sum1; 
}
vblvod(mas);
printf ("Сумма = %lf\n",Sum2);
if(Sum2>9999 || Sum2<-9999) printf("Верно");
else printf("Неверно");
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
