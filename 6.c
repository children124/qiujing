#include <stdio.h>
int main()
{
  int letter=0,digit=0,others=0;
  char c;
  printf("��������һ���ַ����ԡ�?������:\n");
  while((c=getchar())!='?'){
  if(c>='1'&&c<='9')
       digit++;
   else if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
       letter++;
   else others++;
  }
  printf("��ĸ����:%d\n���ָ���:%d\n�����ַ�����:%d\n",letter,digit,others);
return 0;
}
