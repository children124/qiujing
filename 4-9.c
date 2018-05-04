#include <stdio.h>
int main()
{
	int num,a1,a2,a3,a4,a5,place;
	printf("请输入不多于5位的正整数：");
	scanf("%d",&num);
    if(num>9999) place=5;
	else if (num>999) place=4;
    else if (num>99) place=3;
    else if (num>9) place=2;
    else place=1;
	printf("位数：%d位\n",place);
	a5=num/10000;
	a4=(num-a5*10000)/1000;
	a3=(num-a5*10000-a4*1000)/100;
	a2=(num-a5*10000-a4*1000-a3*100)/10;
	a1=(num-a5*10000-a4*1000-a3*100-a2*10);
	switch(place)
	{case 5:printf("每位数字为：%d,%d,%d,%d,%d\n",a5,a4,a3,a2,a1);
	        printf("反序数字为：%d%d%d%d%d\n",a1,a2,a3,a4,a5);
			break;
	 case 4:printf("每位数字为：%d,%d,%d,%d\n",a4,a3,a2,a1);
	        printf("反序数字为：%d%d%d%d\n",a1,a2,a3,a4);
			break;
     case 3:printf("每位数字为：%d,%d,%d\n",a3,a2,a1);
	        printf("反序数字为：%d%d%d\n",a1,a2,a3);
			break;
   	 case 2:printf("每位数字为：%d,%d\n",a2,a1);
	        printf("反序数字为：%d%d\n",a1,a2);
			break;
	 case 1:printf("每位数字为：%d\n",a1);
	        printf("反序数字为：%d\n",a1);
			break;
	}
return 0;
}