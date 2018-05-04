#include <stdio.h>
int main()
{
    int a[4],i,j,t;
    for(i = 0; i < 4; i++)
        {
		printf("请输入第%d个数字：\n",i+1);
        scanf("%d",&a[i]);
		} 
    for(i = 0; i < 3; i++)
        for(j = i+1; j < 4; j++)
        {
            if(a[i]>a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    printf("这四个数字按由小到大排列的顺序为：\n");
    for(i = 0; i < 4; i ++)
    printf("%d\n",a[i]);
}
