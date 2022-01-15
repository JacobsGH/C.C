//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#define size 100
#define sizevert 10
#define sizegor 10
//----------------------------------------------------------------
void vblvod(int res2[size]);//����� ����������� �������
void vbjvod2(int mys[sizevert][sizegor]);//����� ���������� �������
void rand1(int x,int t);//x ��������� ����� �� t
void vvod(int res3[size]);//���� � ���������� ����������� �������
void vvod2(int res[sizevert][sizegor],int w);//���������� ���������� ������� ��������� w
void vvod3(int res[sizevert][sizegor],int w);//���������� ���������� ������� ������� �� ��������
void vvod4(int res3[size],int w);//���������� ������� ��������� w
void vvodrand(int res3[size],int t);//���������� ������� ���������� ����������� �� t
void vvodrand2(int res3[sizevert][sizegor],int t);//���������� ���������� ������� ���������� ����������� �� t
void sdvig(int res4[size],int K);//����� �� � ��������� ����������� �������
void invert(int res4[size]);//�������������� �������
void sortirovkaVstavkoi(int a[size]);//���������� ������� ��������
void sortirovkaVborom(int a[size]);//���������� ������� �������
void sortirovkaPuz(int mas[size]);//���������� ������� ���������
void LineSearch(int A[size], int key2);//�������� ����� � ���������� ������� ���������
void BinSearch2(int B[size], int key2);//�������� ����� � ���������� ������� ���������
void Seaech(int mas[size],int K);//���������� ���������� ������� ������ � ������ � � ����� �
void sortirovkaVborom2(int a[sizevert][sizegor]);//����� ������������ ��������� ���������� �������***
void Summ(int res[size]);//����� ���� ��������� �������
void Summ2(int res3[sizevert][sizegor]);//����� ���� ��������� ���������� �������
void Sred(int res[size]);//������� �������� ���� ��������� �������
void Sred2(int res3[sizevert][sizegor]);//������� �������� ���� ��������� ���������� �������
void Na(int res[size],int k);//���������� ���� ��������� ������� �� k
void Na2(int res3[sizevert][sizegor],int k);//���������� ���� ��������� ���������� ������� �� k
void Vka(int res[size],int k);//���������� ���� ��������� ������� � k
void Vka2(int res3[sizevert][sizegor],int k);//���������� ���� ��������� ���������� ������� � k
void slov(char s[size]);//���������� ���� � ������
//----------------------------------------------------------------
int main()

{
system("color 2");
setlocale(LC_ALL, "Rus");
getchar();
return 0;
}
//----------------------------------------------------------------
void slov(char s[size])
{
unsigned int a,i;
a=0;
for (i=0;i<strlen(s)-1;i++) 	if ((s[i]==' ') && (s[i+1]!=' ')) 	a=a+1;
if (s[0]!=' ') a=a+1;
printf("� ������:%d ����",a);
}
//----------------------------------------------------------------
void Sred(int res[size])
{
	int i,s;
	float u;
    for (i=0;i!=size;i++)
	{
		s+=res[i];
	}
	u=s/size;
	printf("������� �������� ������� = %f",u);
	return s;
}
//----------------------------------------------------------------
void Sred2(int res3[sizevert][sizegor])
{
	int i,s,i2;
	float u;
    for (i=0;i!=sizevert;i++)
	{
		for (i2=0;i2!=sizegor;i2++)
		{
			s+=res3[i][i2];
		}
	}
	u=s/(sizevert*sizegor);
	printf("������� �������� ������� = %f",u);
	return s;
}
//----------------------------------------------------------------
void Summ2(int res3[sizevert][sizegor])
{
	int i,s,i2;
    for (i=0;i!=sizevert;i++)
	{
		for (i2=0;i2!=sizegor;i2++)
		{
			s+=res3[i][i2];
		}
	}
	printf("����� ���� ��������� ������� = %d",s);
	return s;
}
//----------------------------------------------------------------
void Vka2(int res3[sizevert][sizegor],int k)
{
	int i,i2;
    for (i=0;i!=sizevert;i++)
	{
		for (i2=0;i2!=sizegor;i2++)
		{
			res3[i][i2]*k;
		}
	}
}
//----------------------------------------------------------------
void Vka(int res[size],int k)
{
	int i;
    for (i=0;i!=size;i++)
	{
		res[i]*k;
	}
	return 0;
}
//----------------------------------------------------------------
void Na2(int res3[sizevert][sizegor],int k)
{
	int i,i2;
    for (i=0;i!=sizevert;i++)
	{
		for (i2=0;i2!=sizegor;i2++)
		{
			res3[i][i2]+k;
		}
	}
}
//----------------------------------------------------------------
void Na(int res[size],int k)
{
	int i;
    for (i=0;i!=size;i++)
	{
		res[i]+k;
	}
	return 0;
}
//----------------------------------------------------------------
void Summ(int res[size])
{
	int i,s;
    for (i=0;i!=size;i++)
	{
		s+=res[i];
	}
	printf("����� ���� ��������� ������� = %d",s);
	return s;
}
//----------------------------------------------------------------
void rand1(int x,int t)
	{
    srand(time(0));
    x=rand()%t;
    system("pause");
    return 0;
}
//----------------------------------------------------------------
void vvod(int res3[size])
{
	int i;
    for (i=0;i!=size;i++)
	{
		printf("������� %d ������� ������� ",i);
		scanf("%d",&res3[i]);
	}
printf("\n");
}
//----------------------------------------------------------------
void vvod2(int res[sizevert][sizegor],int w)
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
//----------------------------------------------------------------
void vvod3(int res[sizevert][sizegor],int w)
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
//----------------------------------------------------------------
void vvod4(int res3[size],int w)
{
	int i;
    for (i=0;i!=size;i++)
	{
		res3[i]=w;
	}
}
//----------------------------------------------------------------
void vvodrand(int res3[size],int t)
{
	{
    int i;
    srand(time(0));
    for (i=0;i<size;i++) 
	{
        res3[i]=rand()%t;
    }
    system("pause");
    return 0;
}
}
//----------------------------------------------------------------
void vvodrand2(int res3[sizevert][sizegor],int t)
{
	{
    int i,i2;
    srand(time(0));
    for (i=0;i<sizevert;i++) 
	{
        for (i2=0;i2<sizegor;i2++) 
	{
        res3[i][i2]=rand()%t;
    }
    }
    system("pause");
    return 0;
}
}
//----------------------------------------------------------------
void vblvod(int res2[size])
{
	int i;
    for (i=0;i!=size;i++)
	{
		printf("%d ",res2[i]);
	}
printf("\n");
getchar();
}
//----------------------------------------------------------------
void vbjvod2(int mys[sizevert][sizegor])
{
int i,j;
printf("������������ ������=\n");
  for ( i = 0; i < sizevert; i++ )
  {
    for ( j = 0; j < sizegor; j++ )
    {
        printf( "%3d",mys[i][j] );
    }
    printf( "\n" );
}
}
//----------------------------------------------------------------
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
//----------------------------------------------------------------
void sdvig(int res4[size],int K)
{
    int m,i,K2,l,res5[size];
    K2=K;
    for (l=0;l!=size;l++)
    {
        if(l!=K)
        {
           res5[l]=res4[l];
        }
    }
for (i=0;i!=K;i++)
{
    for (l=0;l!=size;l++)
    {
        res4[l]=res4[(l+1)];
    }
}
    for (m=0;m!=K;m++,K2--)
    {
        res4[size-K2]=res5[m];
    }
}
//----------------------------------------------------------------
void invert(int res4[size])
{
    int res5[size],i;
        for (i=0;i!=size;i++)
	{
        res5[i]=res4[i];
	}
        for (i=0;i!=size;i++)
	{
        res4[i]=res5[((size-1)-i)];
	}
}
//----------------------------------------------------------------
void Seaech(int mas[size],int K)
{
	srand(time(NULL));
	int i;
    int equal = 0;
    int more = 0;
    int less = 0;
    
    for (i=0;i<size;i++)
    {
        mas[i] = (float) rand() / ((float) rand());
        printf("mas[%d] = %.3d\n", i+1, mas[i]);
        if(mas[i]>K) more++;
        else if(mas[i]==K) equal++;
        else less++;
    }
    
    printf("������ - %d\n",more);
    printf("����� - %d\n",equal);
    printf("������ - %d\n",less);
}
//----------------------------------------------------------------
void sortirovkaVborom(int a[size])
{
	int i,j,k;
	double min;
	for(i=0;i<size-1;i++)
	{
		k=i;
		min=a[i];
		for(j=i+1;j<size;j++)
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
void sortirovkaPuz(int mas[size])
{
int p;
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
void sortirovkaVstavkoi(int a[size])
{
	int i,j,t;
	double buf;
	for (i=1;i<size;i++)
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
void BinSearch2(int B[size], int key2)
{
  int r,N=size,l=0,mid,t=0;
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
void LineSearch(int A[size], int key2)
{
int i,N=size,t=1;
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

