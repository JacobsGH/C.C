/* 4.Вычислить среднее арифметическое значение элементов, лежащих на диагоналях квадратной матрицы. 
Заменить этим значением все элементы матрицы, не лежащие на диагоналях.*/
//-------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#define N 7
 //-------------------------------------
 void vblvod2x2(int *res);
 void randvvod(int *res);
 void sredardiag (int res[N][N]);
 //-------------------------------------
 
int main ()
{
    system("color 2");
	setlocale(LC_ALL, "Rus");
	int *matrix;
    printf("Matrix %d x %d\n",N,N);
    matrix = malloc(N*N*(sizeof *matrix));
    srand(time(0));
    printf("Старая матрица:\n");
    randvvod(matrix);
    vblvod2x2(matrix);
	sredardiag(matrix);
    printf("Новая матрица:\n");
	vblvod2x2(matrix);
    return 0;
}
//-------------------------------------
void vblvod2x2(int *res)
{
	int i,j;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
            printf("%2d ", res[i*N + j]);
        printf("\n");
    }
}

void randvvod(int *res)
{
 int i,j;
 for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            res[i*N + j] = rand()%100;
        }
    }
}

void sredardiag (int res[N][N])
{
	int i,j;
	float avg,diag=0;
		 for (i=0; i<N; i++) 
	{
        for (j=N; j>=0; j--) 
		{
            if (i==j) 
			{
            diag+=res[i][j];
            }
            if (i==N-j-1) 
			{
                diag+=res[i][j];
            }
        }
    }
    avg=diag/(2*N);
    printf("Среднее арифметическое = %f\n",avg);
    	for (i=0; i<N; i++) 
		{
        for (j=N-1; j>=0; j--) 
		{
            if ((i!=j) && (i!=N-j-1)) 
			{
                res[i][j]=avg;
            }
        }
    }
}
//-------------------------------------	
