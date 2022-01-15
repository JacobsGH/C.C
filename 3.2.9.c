/*9.Дан квадратный массив. Найти минимальный элемент этого массива.*/
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define sizegor 10
#define sizevert 10
//------------------------------------------------
void sortirovkaVborom2(int a[sizevert][sizegor]);
void vvod(int res[sizevert][sizegor],int w);
void vbjvod (int mys[sizevert][sizegor]);
//------------------------------------------------
int main()

{
system("color 2");
setlocale(LC_ALL, "Rus");
int mas[sizevert][sizegor];
vvod(mas,123); 	
vbjvod(mas);				// 1 число массив второе число = чем заполнится весь массив
//mas[5][25]=120;
sortirovkaVborom2(mas);
printf("минимальный элемент массива = %d",mas[0][0]);
getchar();
return 0;
}
//------------------------------------------------
void sortirovkaVborom2(int a[sizevert][sizegor])
{
	int i,j,k,n=sizegor,n2=sizevert,t;
	double min,min2;
	for(t=0;t<n2-1;t++)
	{
        for(i=0;i<n-1;i++)
	   {
	   	k=i;
	   	min=a[t][i];
	   	for(j=i+1;j<n;j++)
	   	if (a[t][j]<min)
	   	{
	   		k=j;
	   		min=a[t][j];
	   	}
	   	a[t][k]=a[t][i];
	   	a[t][i]=min;
	   }
    }
    int i2,j2,k2,n3=sizegor;
	for(i2=0;i2<n3-1;i2++)
	{
		k2=i2;
		min2=a[i2][0];
		for(j2=i2+1;j2<n3;j2++)
		if (a[j2][0]<min2)
		{
			k2=j2;
			min2=a[j2][0];
		}
		a[k2][0]=a[i2][0];
		a[i2][0]=min2;
	}
}
//------------------------------------------------
void vvod(int res[sizevert][sizegor],int w)
{
    int i,t;
	for (t=0;t!=sizegor;t++)
{
    for (i=0;i!=sizevert;i++)
	{
     res[t][i]=w;
	}
}
}
//------------------------------------------------
void vbjvod (int mys[sizevert][sizegor])
{
int i,j;
printf("Получившийся массив=\n");
  for ( i = 0; i < sizevert; i++ )
  {
    for ( j = 0; j < sizegor; j++ )
    {
        printf( "[%d][%d]=%d ", i, j, mys[i][j] );
    }
    printf( "\n" );
}
}
