/*2.� �������� ������� �� 20 ��������� ����� �������,��������� � ����������, 
������� �� ����� ����� ������� ����� �������� ��� -1, ���� ������� �� ������. 
(������������ �������� ��������� ������, �������� ��������� ������). ������� �� ����� ���������� ���������.*/
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
printf("������� �������� �������� ������ ������� �� ������ ����� ");
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
  printf("\n������������ �������� �����\n");
for (i=0;i<N; i++)
{
    if (B[i]==key2)
    {
	printf("\n����� �������� ������ = %d",i);
    printf("\n���������� ��������� = %d",t);
    printf("\n");
    break;
    }
    else if(B[20-i]==key2)
    {
	printf("\n����� �������� ������ = %d",(20-i));
    printf("\n���������� ��������� = %d",t);
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
  printf("\n\n�������� �����(� ����������� )\n");
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
    printf("\n����� �������� ������ = %d",search);
    printf("\n���������� ��������� = %d",t);
    printf("\n");
  }
  
}
//----------------------------------------------------------------
void LineSearch(int A[], int key2)
{
int i,N=20,t=1;
printf("\n�������� �����\n");
for (i=0; i<N; i++)
{
if (A[i]==key2)
{
printf("\n����� �������� ������ = %d",i);
printf("\n���������� ��������� = %d",t);
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
	printf("\n������ = ");
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
