/*6.Написать функцию, которая для строки находит количество заглавных букв, содержащихся в ней.*/
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#define size 40
//----------------------------------------------------------------
void scanstr(char *x);
//----------------------------------------------------------------
int main()
{
system("color 2");
setlocale(LC_ALL, "Rus");
char str[size]="GYHDGDGdfgdgdkgdfgFDgdogdgFGdfdfgFDGDFGH12";
scanstr(str);
getchar();
return 0;
}
//----------------------------------------------------------------
void scanstr(char *x)
{
int t=0,c,i,o=0;
for (i=0;i<size;i++)
{
	if (isupper(x[i])) t++;
}
printf("В строке %d заглавных букв",t);
}
//----------------------------------------------------------------
