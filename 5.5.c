/*5.�������� �������, ������������ ���������� ���������� ���� � ������.*/
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#define size 100 //�������� ��������
#define mb 10
//----------------------------------------------------------------
int slov(char s2[size]);
//----------------------------------------------------------------
int main()
{
system("color 2");
setlocale(LC_ALL, "Rus");
char str[size]="hello helo helo guuuiuh op rtrtrt ertert rtertet ihg uty ytry fghihuiu";
printf("%d",slov(str));
getchar();
return slov(str);
}
//-------------------------------------
int slov(char s2[size])
{
char s[size],cha[size][size];//s-���� s2, cha ��������� ������ ��� 1�������� ����� 2 �������� �����
int a=0,i,t=1,e=strlen(s2),X=0;//a-���������� ����, i ����������, X-���������� ������������� ���� � ������
int res[size],resb[size];//res-���������� �������� resb-���������� ���� � ������
for (i=0;i!=size;i++){//������������ s c s2 + ���������� res � resb 0
	s[i]=s2[i];
	res[i]=0;
	resb[i]=0;
	}
if(s[e-1]!=' '){
	s[e]=' ';
	s[e+1]='o';//����� ������
	e=strlen(s);//strlen ����������� ����� ������
	}
for (i=0;i<e;i++){
    if ((s[i]==' ') && (s[i+1]!=' ')){ //����������� ��������� �������� � ������ �� � res + ����������� ���������� ����
        a++;
        res[a]=i;
    }
}
printf("� ������ %d ����\n",a);
for (i=1;i!=size;i++){
	if (res[i]!=0){
		t++;
	}
	else break;
}
printf("���������� ������,�������� � �����:");
for (i=0;i!=t;i++){
		printf("%d ",res[i]);
		resb[i]=res[i+1]-res[i]-1;
	}
printf("\n���������� ���� � ������(�� �������):");
for (i=0,resb[0]++;resb[i]>0;i++){
		printf("%d ",resb[i]);
	}
	int i3,i2,i4,i5,j;
	for(i5=0,i3=0;i5<a;i5++){
		i4=res[i5]-res[i5+1];
		for(i2=0;i2<(i4);i2++){
            printf(" ");
			printf("%�",s2);
			//cha[i5][i2]=s2[i3];
			i3++;
		}
	}	
//strncmp (s, s2,size)*��������� s � s2 strncmp-������� ��������� ������ size ���������� ���� ��������� ����� 0 ���� ��� 1*
}
