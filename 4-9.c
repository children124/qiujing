#include <stdio.h>
int main()
{
	int num,a1,a2,a3,a4,a5,place;
	printf("�����벻����5λ����������");
	scanf("%d",&num);
    if(num>9999) place=5;
	else if (num>999) place=4;
    else if (num>99) place=3;
    else if (num>9) place=2;
    else place=1;
	printf("λ����%dλ\n",place);
	a5=num/10000;
	a4=(num-a5*10000)/1000;
	a3=(num-a5*10000-a4*1000)/100;
	a2=(num-a5*10000-a4*1000-a3*100)/10;
	a1=(num-a5*10000-a4*1000-a3*100-a2*10);
	switch(place)
	{case 5:printf("ÿλ����Ϊ��%d,%d,%d,%d,%d\n",a5,a4,a3,a2,a1);
	        printf("��������Ϊ��%d%d%d%d%d\n",a1,a2,a3,a4,a5);
			break;
	 case 4:printf("ÿλ����Ϊ��%d,%d,%d,%d\n",a4,a3,a2,a1);
	        printf("��������Ϊ��%d%d%d%d\n",a1,a2,a3,a4);
			break;
     case 3:printf("ÿλ����Ϊ��%d,%d,%d\n",a3,a2,a1);
	        printf("��������Ϊ��%d%d%d\n",a1,a2,a3);
			break;
   	 case 2:printf("ÿλ����Ϊ��%d,%d\n",a2,a1);
	        printf("��������Ϊ��%d%d\n",a1,a2);
			break;
	 case 1:printf("ÿλ����Ϊ��%d\n",a1);
	        printf("��������Ϊ��%d\n",a1);
			break;
	}
return 0;
}