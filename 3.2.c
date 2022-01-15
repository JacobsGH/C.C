/*2.В заданном массиве на 20 элементов найти элемент,введенный с клавиатуры, 
вывести на экран номер позиции этого элемента или -1, если элемент не найден. 
(Использовать алгоритм линейного поиска, алгоритм бинарного поиска). Вывести на экран количество сравнений.*/
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
//----------------------------------------------------------------
void LineSearch(int A[], int key2);
void BinSearch(int B[], int key2);
void BinSearch2(int B[], int key2);
void vblvod(int res2[20]);
void sortirovkaVstavkoi(int a[]);
//----------------------------------------------------------------
int main()

{
system("color 2");
setlocale(LC_ALL, "Rus");
int keu,res[]={0,1,2,3,4,5,6,7,8,90,100,11,12,13,14,15,16,17,18,19};
printf("Введите значение элемента масива которое вы хотите найти ");
scanf("%d",&keu);
vblvod(res);
BinSearch(res,keu);
LineSearch(res,keu);
sortirovkaVstavkoi(res);
BinSearch2(res,keu);
getchar();
return 0;
}
//----------------------------------------------------------------
void BinSearch(int B[], int key2)
{
  int i,N=20,t=1;
  printf("\nнеправельный Бинарный поиск\n");
for (i=0;i<N; i++)
{
    if (B[i]==key2)
    {
	printf("\nНомер элемента масива = %d",i);
    printf("\nКоличество сравнений = %d",t);
    printf("\n");
    break;
    }
    else if(B[20-i]==key2)
    {
	printf("\nНомер элемента масива = %d",(20-i));
    printf("\nКоличество сравнений = %d",t);
    printf("\n");
    break;
    }
t++;
}
if(B[i]!=key2 && B[20-i]!=key2)
{
printf("-1");
}
return 0;  
}
//----------------------------------------------------------------
void BinSearch2(int B[], int key2)
{
  int r,N=20,l=0,mid,t=0;
  r=N-1;
  int search = -1;
  printf("\n\nБинарный поиск(с сортировкой )\n");
while (l<=r)
{
    mid=(l+r)/2;
    if (B[mid]==key2)
    {
        search=mid;
        break;
    } 
    if(key2<B[mid])
    {
        r=mid-1;
    }
    else l=mid+1;
    t++;
  }
  if(search==-1)
  {
      printf("-1");
  } 
  else 
  {
    printf("\nНомер элемента масива = %d",search);
    printf("\nКоличество сравнений = %d",t);
    printf("\n");
  }
  
}
//----------------------------------------------------------------
void LineSearch(int A[], int key2)
{
int i,N=20,t=1;
printf("\nЛинейный поиск\n");
for (i=0; i<N; i++)
{
if (A[i]==key2)
{
printf("\nНомер элемента масива = %d",i);
printf("\nКоличество сравнений = %d",t);
break;
}
t++;
}
if(A[i]!=key2)
{
printf("-1");
}
return 0;  
}
//----------------------------------------------------------------
void vblvod(int res2[20])
{
	printf("\nмассив = ");
	int i;
    for (i=0;i!=20;i++)
	{
		printf("%d ",res2[i]);
	}
printf("\n");
getchar();
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
