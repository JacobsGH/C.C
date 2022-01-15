/*8.«аполнить двумерный массив, как показано на рисунке.*/
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define sizegor 10
#define sizevert 12
//------------------------------------------------
void vvod(int res[sizevert][sizegor],int w);
void vbjvod (int mys[sizevert][sizegor]);
//------------------------------------------------
int main()

{
system("color 2");
setlocale(LC_ALL, "Rus");
int mas[sizevert][sizegor];
vvod(mas,sizegor*sizevert);
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
    if((t%2)==0)
	{
	for (i=0;i!=sizevert;i++)
		{
    		res[i][t]=w;
    		w--;
		}
	}
	else
	{
		w++;
		for (i=sizevert;i!=-1;i--)
		{
    		res[i][t]=w;
    		w--;
		}	
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
        printf( "%4d",mys[i][j] );
    }
    printf( "\n" );
}
}
//------------------------------------------------
