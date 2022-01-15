/*10.ƒвумерный квадратный массив разбит диагонал€ми на 4 части, как показано на рисунке. 
ѕомен€ть местами элементы массива в верхней и нижней четверти.*/
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define sizegor 10
#define sizevert 10
#define n 10
//------------------------------------------------
void vvod(int res[sizevert][sizegor],int w);
void vbjvod (int mys[sizevert][sizegor]);
void Transport(int mas[sizevert][sizegor]);
//------------------------------------------------
int main()

{
system("color 2");
setlocale(LC_ALL, "Rus");
int mas[sizevert][sizegor];
vvod(mas,n*n);
vbjvod(mas);
Transport(mas);
vbjvod(mas);
getchar();
return 0;
}
//------------------------------------------------
void vvod(int res[sizevert][sizegor],int w)
{
    int i,t,z;
	for (t=0;t!=sizegor;t++)
{
    for (i=0;i!=sizevert;i++)
	{
    res[i][t]=w;
    w--;
	}
}
}
//------------------------------------------------
void vbjvod (int mys[sizevert][sizegor])
{
int i,j;
printf("ѕолучившийс€ массив=\n");
  for ( i = 0; i < sizevert; i++ )
  {
    for ( j = 0; j < sizegor; j++ )
    {
        printf( "%3d",mys[i][j] );
    }
    printf( "\n" );
}
}
//------------------------------------------------
void Transport(int mas[sizevert][sizegor])
{
int i,j,x,y;
/*for (i=0; i<n; i++) дл€ боковых
{
for (j=0; j<i; j++)
{
    x=mas[i][j];
    y=mas[i][n-j-1];
    mas[i][j]=y;
    mas[i][n-j-1]=x;
}
}*/
for (j=0; j<n; j++)
{
for (i=0; i<=j; i++)//не берутс€ справа , если без = то не беутс€ слева
{
    x=mas[i][j];
    y=mas[n-i-1][j];
    mas[i][j]=y;
    mas[n-i-1][j]=x;
}
}
}
