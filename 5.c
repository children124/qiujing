#include<stdio.h>
void main( )
{ int a;
  printf("������һ����λ������:\n");
  scanf("%d" , &a);
  printf("���ķ����Ӧ��Ϊ��%d%d%d\n", a%10, a/10%10, a/100); 
}
