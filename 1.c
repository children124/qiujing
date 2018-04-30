#include <stdio.h>
#define PI 3.1415926
void main()
{int r;
float area;
printf("请输入半径的值:\n");
scanf("%d",&r);
area=PI*r*r;
printf("圆周率=%f 半径=%d\n面积=%f\n",PI,r,area);
}
