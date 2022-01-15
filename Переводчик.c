#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

int main(){
system("color 3");
setlocale(LC_ALL, "Rus");
int i,x,v=128,z;
  printf("Введите число : ");
  scanf("%d",&x);
  z=log2(x);
  int mas[z];
  printf("\nДесятичное : %d\n",x);
  printf("Шестнадцатиричное : 0x%x\n",x);
  printf("Восьмеричное : %o\n",x);
  printf("Бинарное : ");
     for(i=0;i<=z;i++){
            mas[i]=x%2;
            x/=2;
 	}
for(i=z;i!=-1;i--) printf("%d",mas[i]);
  getchar();
  return 0;
}
