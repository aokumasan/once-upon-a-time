#include <stdio.h>

int getdata(void)
{
  int a;

  printf("���ͤ����Ϥ��Ƥ���������");
  scanf("%d",&a);

  return a;
}

void omikuji(int number)
{
  if(number == 1){
    printf("��ȤǤ����������͡�\n");
  }
  else if(number == 2){
    printf("�ȤǤ�����ä�����\n");
  }
  else if(number == 3){
    printf("���ȤǤ����ޤ������̤���\n");
  }
  else{
    printf("1,2,3�ʳ��ο��ͤ����Ϥ���ޤ���.\n");
    printf("1,2,3�Τɤ줫�����Ϥ��Ƥ͡�\n");
  }
}

int main(void)
{
  int x;

  x = getdata();

  omikuji(x);

  return 0;
}