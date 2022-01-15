/*5.���������� ������ ��������� ������ �������� �������������� ����������� � ������� 10 ����������� ���. 
������ �������� ������� ��������� ���� ���, ������ ����� ������������� ������� ����, � ������ �������� - ���� ������ 
(�������, ��� � ������ ������ 30 ����). 
���������� ����� ������ � ����� �������� ��� � ������ ����������� ���� � �� ���� ������ ����������.*/
//-------------------------------------
#include <stdio.h>
#include <locale.h>
#define ers 10
#define mounch 12
#define daus 30
//-------------------------------------
void searchMaxMin(int res[ers][mounch][daus]);
void vvod(int res[ers][mounch][daus],int w);
void vvodjurn(int res[ers][mounch][daus]);
void vbivodjurn(int res[ers][mounch][daus]);
//-------------------------------------
int main (void)
{
	system("color 2");
	setlocale(LC_ALL, "Rus");
    int jurnal[ers][mounch][daus];
    vvod(jurnal,0);
    vvodjurn(jurnal);
    vbivodjurn(jurnal);
    searchMaxMin(jurnal);
    return 0;
}
//-------------------------------------
void vvod(int res[ers][mounch][daus],int w)
{
    int i,t,j;
    for (j=0;j!=ers;j++)
    {
	for (t=0;t!=mounch;t++)
	{
    for (i=0;i!=daus;i++)
	{
     res[j][t][i]=w;
	}
}
}
}

void vvodjurn(int res[ers][mounch][daus])
{
	int i,g,m,d,t;
	for (i=0;i<100;i++)
{
    printf ("������� �����: ����,������,��� � ����������� � ���� ����\n"); /*����� ����� ���������� ��� = 100*/
    scanf("%d %d %d %d",&g,&m,&d,&t);
    if (g<11 && m<13 && d<30)
    {
    	res[g-1][m-1][d-1]=t;
	}
    else if(g==100)
    {
    	break;
	}
	else
    {
    	printf("�� ��������� �������\n\n");
	}
}
}

void vbivodjurn(int res[ers][mounch][daus])
{
	int i,k,n,c;
	for (i=0; i<ers; i++) /*����� �������*/
    {
    	printf("����� ���� %d\n",i+1);
        for (k=0; k<mounch; k++)
        {
        	printf("����� ������ %d\t",k+1);
            for (n=0; n<daus; n++)
                printf ("%3d",res[i][k][n]);
            printf("\n");
        }
        printf("\n\n");
    }
}

void searchMaxMin(int res[ers][mounch][daus])
{
	int max=0,min=0,i,k,n;
for (i=0; i<ers; i++)
    {
        for (k=0; k<mounch; k++)
        {
            for (n=0; n<daus; n++)
            {
            	if (res[i][k][n]>max)
            	{
            		max=res[i][k][n];
				}
			}
        }
    }
    printf("\n������������ ����������� = %d\n",max);
    for (i=0; i<ers; i++)
    {
        for (k=0; k<mounch; k++)
        {
            for (n=0; n<daus; n++)
            {
            	if (res[i][k][n]<min)
            	{
            		min=res[i][k][n];
				}
			}
        }
    }
    printf("\n����������� ����������� = %d\n",min);
}
