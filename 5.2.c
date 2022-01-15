/*2.Ќаписать функции заполнени€ одномерного массива с клавиатуры, 
вывода массива на печать, поиска наименьшего по модулю элемента массива. */
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define size 10
//----------------------------------------------------------------
void kl(int res[]);
void random(int res[]);
void print(int res[]);
void searchMin(int res[]);
//----------------------------------------------------------------
int main()

{
system("color 2");
setlocale(LC_ALL, "Rus");
int res1[size];
kl(res1);
print(res1);
searchMin(res1);
getchar();
return 0;
}
//----------------------------------------------------------------
void kl(int res[]) /*заполнение одномерного массива с клавиатуры*/
{
	int i;
	for (i=0;i!=size;i++)
	{
		printf("¬ведите %d число массива ",i); 
		scanf("%d",&res[i]);
	}
printf("\n");
getchar();
}

void random(int res[]) /*заполнение случайными числами до 100*/
{
	int i,n;
	srand(time(0));
    for (i = 0; i < n; i++) 
	{
        res[i] = rand() % 100;
        printf("%d ", res[i]);
    }
putchar('\n');
getchar();
}

void print(int res[]) /*вывода массива на печать*/
{
	printf("ћассив:");
    int i;
    for (i=0;i!=size;i++)
	{
		printf("%d ",res[i]);
	}
printf("\n");
}

void searchMin(int res[]) /*поиска наименьшего по модулю элемента массива. */
{
int min=res[0],i,mod;
for (i=0; i<size;i++)
    {
    if (res [i]<0)
    {
    	mod=res[i]*-1;
    	if (mod<min)
    	{
    		min=mod;
		}
	}
    if (res[i]<min && res[i]>-1)
    {
    min=res[i];
    }
}
    printf("\nћинимальный элемент массива по модулю = %d\n",min);
}
getchar();
//----------------------------------------------------------------
