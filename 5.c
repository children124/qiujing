#include<stdio.h>
void main( )
{ int a;
  printf("请输入一个三位正整数:\n");
  scanf("%d" , &a);
  printf("它的反向对应数为：%d%d%d\n", a%10, a/10%10, a/100); 
}
