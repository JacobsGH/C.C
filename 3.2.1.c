/*1.Заполнить массив двадцатью первыми членами геометрической  прогрессии с известным первым членом b и знаменателем q .*/
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
//------------------------------------------------
void vblvod(double res2[20]);
//------------------------------------------------
int main()

{
system("color 2");
setlocale(LC_ALL, "Rus");
int n=20;
double mas[n];
float d,q;
int i;
    printf("Введите b(1 член) и q (знаменатель) ");
    scanf("%f",&d);
    scanf("%f",&q);
mas[0]=d;
for (i=1;i!=n;i++)
{
 mas[i]=mas[i-1]*q;  
}
vblvod(mas);
getchar();
return 0;
}
//------------------------------------------------
void vblvod(double res2[20])
{
	int i;
    for (i=0;i!=20;i++)
	{
		printf("%lf \n",res2[i]);
	}
	getchar();
printf("\n");
getchar();
}
//------------------------------------------------
