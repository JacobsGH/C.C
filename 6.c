/*6.������� ��������� ����������� (��������� ��������� a,b,c).
������� �������, ������� ������������ ��������, �������, ���������� ��� ������������, 
������������� �� ����� �������� � ������������. 
�������� �������, ������������, ������� ������ �� ���� ������������� ������. 
�������� ���������, � ������� �������������� �������������� ���� ������������� � �������� ����������,
����� �� ��� ����� ���������� �������.*/
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
//----------------------------------------------------------------
struct Tpeygolnuk //3 ������� a d c
{
	float a;
	float b;
	float c;
};
//----------------------------------------------------------------
float perimetr(struct Tpeygolnuk T1);
double ploshad(struct Tpeygolnuk T1);
void tiptr(struct Tpeygolnuk T1);
void ktobolshe(struct Tpeygolnuk T1,struct Tpeygolnuk T2);
int proverka (struct Tpeygolnuk T1,struct Tpeygolnuk T2);
int proverka2 (struct Tpeygolnuk T1);
//----------------------------------------------------------------
int main()
{
system("color 2");
setlocale(LC_ALL, "Rus");
struct Tpeygolnuk tr1;
struct Tpeygolnuk tr2;
printf("������� ������ ������� ������������ ");
scanf("%f%f%f",&tr1.a,&tr1.b,&tr1.c);
printf("������� ������ ������� ������������ ");
scanf("%f%f%f",&tr2.a,&tr2.b,&tr2.c);
if(proverka(tr1,tr2))
{
printf("\n�������� ������������� ����� %f � %f",perimetr(tr1),perimetr(tr2));
printf("\n������� ������������� ����� %lf � %lf",ploshad(tr1),ploshad(tr2));
ktobolshe(tr1,tr2);
printf("\n��� �������������:");
tiptr(tr1);
printf(" � ");
tiptr(tr2);
}
else if(proverka2(tr1))
{
    printf("\n����������� 1 �� ����������");
    getchar();
}
else if(proverka2(tr2))
{
    printf("\n����������� 2 �� ����������");
    getchar();
}
getchar();
return 0;
}
//----------------------------------------------------------------
int proverka (struct Tpeygolnuk T1,struct Tpeygolnuk T2)
{
    if(((T1.a+T1.b)>T1.c) && (T1.a<(T1.b+T1.c)) && ((T1.a+T1.c)>T1.b) && ((T2.a+T2.b)>T2.c) && (T2.a<(T2.b+T2.c)) && ((T2.a+T2.c)>T2.b))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//----------------------------------------------------------------
int proverka2 (struct Tpeygolnuk T1)
{
    if(((T1.a+T1.b)>T1.c) && (T1.a<(T1.b+T1.c)) && ((T1.a+T1.c)>T1.b))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
//----------------------------------------------------------------
float perimetr(struct Tpeygolnuk T1)
{
return T1.a+T1.b+T1.c;
}
//----------------------------------------------------------------
double ploshad(struct Tpeygolnuk T1)
{
double p,S;
float x=T1.a,y=T1.b,z=T1.c;
p=(x+y+z)/2;
S=sqrt(p*(p-x)*(p-y)*(p-z));
return S;
}
//----------------------------------------------------------------
void tiptr(struct Tpeygolnuk T1)
{
float x=T1.a,y=T1.b,z=T1.c;
if ((x*x == (y*y + z*z)) || (y*y ==(x*x + z*z)) || (z*z == (y*y + x*x)))
    printf("�������������");
else if ((x*x < (y*y + z*z)) || (y*y < (x*x + z*z)) || (z*z < (y*y + x*x)))
{
    if(x==y && y==z && z==x )
    printf("������������� ��������������");
    else if (x==y || y==x || x==z)
    printf("������������� ��������������");
    else 
    printf("�������������");
	}
else if ((x*x > (y*y + z*z)) || (y*y > (x*x + z*z)) || (z*z > (y*y + x*x)))
    printf("������������");
else if (x==y && y==z && z==x )
    printf("�������������� ��������������");
else printf("������������");
getchar();
}
//----------------------------------------------------------------
void ktobolshe (struct Tpeygolnuk T1,struct Tpeygolnuk T2)
{
float S,S1;
S=ploshad(T1);
S1=ploshad(T2);
printf("\n");
    if(S>S1)
    printf("������� ������� ������������ ������");
    else if (S1>S)
    printf("������� ������� ������������ ������");
    else 
    printf("������������ �����");
}
//----------------------------------------------------------------
