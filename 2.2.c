#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
setlocale(LC_ALL, "Rus");
float D,a,b,e;
double f;
printf("Введите a и b\n");
scanf("%f",&a);
scanf("%f",&b);
printf("Если a=%f и b=%f ,то ",a,b);
getchar();
if(b!=-1 && a!=-1 && b!=a && b!=1 && a!=1 && b!=0 && a<99999997950 && b<99999997950)
{
f=(pow((b-a),2)*(exp(tan(a/b))));
D=((-1*(sin(a)))+sqrt(pow((sin(a)),2)+(12*(fabs(log(fabs(b)))))))/f;
printf("значения входят в ООФ\n");
printf("D=%.6f",D);
}
else
{
printf("не входит в ООФ");
}
getchar();
return 0;
}

