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
void vblvod(int res2[size]);//вывод одномерного массива
void vbjvod2(int mys[sizevert][sizegor]);//вывод двумерного массива
void rand1(int x,int t);//x случайное число до t
void vvod(int res3[size]);//ввод с клавиатуры одномерного массива
void vvod2(int res[sizevert][sizegor],int w);//заполнение двумерного массива элементом w
void vvod3(int res[sizevert][sizegor],int w);//заполнение двумерного массива змейкой на убывание
void vvod4(int res3[size],int w);//заполнение массива элементом w
void vvodrand(int res3[size],int t);//заполнение массива случайными эллементами до t
void vvodrand2(int res3[sizevert][sizegor],int t);//заполнение двумерного массива случайными эллементами до t
void sdvig(int res4[size],int K);//сдвиг на К элементов одномерного массива
void invert(int res4[size]);//инвертирование массива
void sortirovkaVstavkoi(int a[size]);//сортировка массива вставкой
void sortirovkaVborom(int a[size]);//сортировка массива выбором
void sortirovkaPuz(int mas[size]);//сортировка массива пузырьком
void LineSearch(int A[size], int key2);//линейный поиск в одномерном массиве эллемента
void BinSearch2(int B[size], int key2);//бинарный поиск в одномерном массиве эллемента
void Seaech(int mas[size],int K);//количество эллементов массива больше К меньше К и равно К
void sortirovkaVborom2(int a[sizevert][sizegor]);//Поиск минемального эллемента двумерного массива***
void Summ(int res[size]);//сумма всех элементов массива
void Summ2(int res3[sizevert][sizegor]);//сумма всех элементов двумерного массива
void Sred(int res[size]);//среднее значение всех элементов массива
void Sred2(int res3[sizevert][sizegor]);//среднее значение всех элементов двумерного массива
void Na(int res[size],int k);//увелечение всех элементов массива на k
void Na2(int res3[sizevert][sizegor],int k);//увелечение всех элементов двумерного массива на k
void Vka(int res[size],int k);//увелечение всех элементов массива в k
void Vka2(int res3[sizevert][sizegor],int k);//увелечение всех элементов двумерного массива в k
void slov(char s[size]);//количество слов в строке
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
printf("В строке:%d слов",a);
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
	printf("среднее значение массива = %f",u);
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
	printf("среднее значение массива = %f",u);
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
	printf("сумма всех элементов массива = %d",s);
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
	printf("сумма всех элементов массива = %d",s);
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
		printf("Введите %d элемент массива ",i);
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
printf("Получившийся массив=\n");
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
    
    printf("Больше - %d\n",more);
    printf("Равно - %d\n",equal);
    printf("Меньше - %d\n",less);
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
void LineSearch(int A[size], int key2)
{
int i,N=size,t=1;
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

