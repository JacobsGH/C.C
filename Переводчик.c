#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

int main(){
system("color 3");
setlocale(LC_ALL, "Rus");
int i,x,v=128,z;
  printf("������� ����� : ");
  scanf("%d",&x);
  z=log2(x);
  int mas[z];
  printf("\n���������� : %d\n",x);
  printf("����������������� : 0x%x\n",x);
  printf("������������ : %o\n",x);
  printf("�������� : ");
     for(i=0;i<=z;i++){
            mas[i]=x%2;
            x/=2;
 	}
for(i=z;i!=-1;i--) printf("%d",mas[i]);
  getchar();
  return 0;
}
