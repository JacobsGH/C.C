/*5.Дан массив на 20 элементов. 
Написать программу, реализующую циклический сдвиг влево элементов массив на K позиций. */
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
//--------------------------------------
void vblvod(int res2[20]);
void vvod(int res3[20]);
void sdvig(int res4[20]);
//--------------------------------------
int main()

{
system("color 2");
setlocale(LC_ALL, "Rus");
int i,y,res[20];
vvod(res);
sdvig(res);
vblvod(res);
getchar();
return 0;
}
//--------------------------------------
void vvod(int res3[20])
{
	int i;
    for (i=0;i!=20;i++)
	{
		printf("Введите %d элемент массива ",i);
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
void sdvig(int res4[20])
{
    int m,i,K,K2,l,res5[20];
    printf("Введите K ");
    scanf("%d",&K);
    K2=K;
    for (l=0;l!=20;l++)
    {
        if(l!=K)
        {
           res5[l]=res4[l];
        }
    }
for (i=0;i!=K;i++)
{
    for (l=0;l!=20;l++)
    {
        res4[l]=res4[(l+1)];
    }
}
    for (m=0;m!=K;m++,K2--)
    {
        res4[20-K2]=res5[m];
    }
}
//--------------------------------------
