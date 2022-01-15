/*6.Дан массив на 30 элементов. Найти число пар соседних элементов массива, являющихся четными числами.*/
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define size 30
//------------------------------------------------
void vblvod(int res2[size]);
void vvod(int res3[size]);
//------------------------------------------------
int main()

{
system("color 2");
setlocale(LC_ALL, "Rus");
int mas[size]={1,2,3,-4,5,6,-7,8,16,6,8,12,9,10,-70};
int i,n,j;
double Sum1,Sum2;
vblvod(mas);
for (i=0;i!=size;i++)
{
    if (mas[i]!=0 && mas[i+1]!=0)
    {
	n=mas[i]%2;
    j=mas[i+1]%2;
	if(n==0 && j==0)
	{
		Sum1++;
	}
}
}
printf ("Число пар = %.0lf\n",Sum1);
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
