/*1.�������� �������, �����������, �������� �� ��� ����� ������� ��������.*/
//----------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//----------------------------------------------------------------
void Prov(int x1,int x2);
 //----------------------------------------------------------------
int main() 
{
    system("color 2");
	setlocale(LC_ALL, "Rus");
    unsigned int x, y;
    printf("������� ��� ����������� ����� ");
    scanf("%d %d",&x,&y);
    Prov(x,y);
    getchar();
    return 0;
}
 //----------------------------------------------------------------
void Prov(int x1,int x2) 
{
    int t; 
    while (x2)
	{
        t=x1%x2;
        x1=x2;
        x2=t;
    }
    if (x1==1)
    printf("������ ��� ����� �������� ������� ��������");
    else
    printf("������ ��� ����� �� �������� ������� ��������");
    getchar();
}
//----------------------------------------------------------------
