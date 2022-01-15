/*3.Дана матрица размером 7х7. Поменять местами k-й столбец с k-ой строкой (k вводится с клавиатуры).*/
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
 //-------------------------------------
 
int main()
{
    system("color 2");
	setlocale(LC_ALL, "Rus");
	int k,i,j,*matrix,temp;
    printf("Matrix %d x %d",N,N);
    printf("\nk = ");
    scanf("%d", &k);
    k--;
    matrix = malloc(N*N*(sizeof *matrix));
    srand(time(0));
    printf("Старая матрица:\n");
    randvvod(matrix);
    vblvod2x2(matrix);
    for(i = 0; i < N; i++) /*замена*/
    {
        temp = matrix[i*N + k];
        matrix[i*N + k] = matrix[k*N + i];
        matrix[k*N + i] = temp;
    }
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
//-------------------------------------	
