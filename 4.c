#include<stdio.h>
void main( )
{ float  a, b, c, max ;
  printf("请输入变量a:\n");
  scanf("%f" , &a);
  printf("请输入变量b:\n");
  scanf("%f" , &b);
  printf("请输入变量c:\n");
  scanf("%f" , &c);
  max=a ;
  if (b>max) max=b;
  if (c>max) max=c;
  printf("最大数是: %f\n", max); 
      }
