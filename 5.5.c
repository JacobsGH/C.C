/*5.Написать функцию, определяющую количество одинаковых слов в строке.*/
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#define size 100 //максимум символов
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
char s[size],cha[size][size];//s-клон s2, cha двумерный массив где 1эллемент номер 2 эллемент слово
int a=0,i,t=1,e=strlen(s2),X=0;//a-количество слов, i переменная, X-КОЛИЧЕСТВО ПОВТОРЯЮЩИХСЯ СЛОВ В СТРОКЕ
int res[size],resb[size];//res-координаты пробелов resb-количество букв в словах
for (i=0;i!=size;i++){//клонирование s c s2 + заполнение res и resb 0
	s[i]=s2[i];
	res[i]=0;
	resb[i]=0;
	}
if(s[e-1]!=' '){
	s[e]=' ';
	s[e+1]='o';//любой символ
	e=strlen(s);//strlen определение длины строки
	}
for (i=0;i<e;i++){
    if ((s[i]==' ') && (s[i+1]!=' ')){ //определение координат пробелов и запись их в res + определение количества слов
        a++;
        res[a]=i;
    }
}
printf("В строке %d слов\n",a);
for (i=1;i!=size;i++){
	if (res[i]!=0){
		t++;
	}
	else break;
}
printf("Координаты начала,пробелов и конца:");
for (i=0;i!=t;i++){
		printf("%d ",res[i]);
		resb[i]=res[i+1]-res[i]-1;
	}
printf("\nКоличество букв в словах(по порядку):");
for (i=0,resb[0]++;resb[i]>0;i++){
		printf("%d ",resb[i]);
	}
	int i3,i2,i4,i5,j;
	for(i5=0,i3=0;i5<a;i5++){
		i4=res[i5]-res[i5+1];
		for(i2=0;i2<(i4);i2++){
            printf(" ");
			printf("%с",s2);
			//cha[i5][i2]=s2[i3];
			i3++;
		}
	}	
//strncmp (s, s2,size)*сравнение s и s2 strncmp-функция сравнения первых size эллементов если совпадают вернёт 0 если нет 1*
}
