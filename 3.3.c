/*3.Дан массив на 20 элементов. 
Отсортировать массив по возрастанию,
используя алгоритм сортировки вставкой, 
алгоритм сортировки выбором, 
сортировку "пузырьком".*/
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
//----------------------------------------------------------------
void sortirovkaVstavkoi(int a[]);
void sortirovkaVborom(int a[]);
void sortirovkaPuz(int mas[]);
void vblvod(int i,int res[20]);
void vvod(int i,int res[20]);
//----------------------------------------------------------------
int main()
{
system("color 2");
setlocale(LC_ALL, "Rus");
int i,res[20];
vvod(i,res);
printf("Первоначально массив =");
vblvod(i,res);
sortirovkaPuz(res);
printf("После сортировки массив =");
vblvod(i,res);
getchar();
return 0;
}
//----------------------------------------------------------------
void vvod(int i,int res[20])
{
	for (i=0;i!=20;i++)
	{
		printf("Введите %d число массива ",i); 
		scanf("%d",&res[i]);
	}
printf("\n");
}
//----------------------------------------------------------------
void vblvod(int i,int res[20])
{
	for (i=0;i!=20;i++)
	{
		printf("%d ",res[i]);
	}
printf("\n");
getchar();
}
//----------------------------------------------------------------
void sortirovkaVborom(int a[])
{
	int i,j,k,n=20;
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
//----------------------------------------------------------------
void sortirovkaPuz(int mas[])
{
int p,size=20;
for(p=10;p!=0;p--)
{
	int i;
	for(i=0; i<size; i++)
    {
        int j;
		for (j=i; j<size-1; j++)
        {
			if (mas[j]>mas[j+1])
			{
                int temp=mas[j];
                mas[j]=mas[j+1];
                mas[j+1]=temp;
            }
        }
	}
}
}
//----------------------------------------------------------------
void sortirovkaVstavkoi(int a[])
{
	int i,j,n=20,t;
	double buf;
	for (i=1;i<n;i++)
	{
		buf=a[i];
		for (j=i-1;j>=0 && a[j]>buf;j--) 
		{
			a[j+1]=a[j];
		}
		a[j+1]=buf;
	}
}
//----------------------------------------------------------------
