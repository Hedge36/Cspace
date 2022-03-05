// 诶拉托色尼法（筛选法）求100以内素数
// 连续写出1-100，从2开始，去掉其后每一个能被2整除的数，直到其后没有数了为止，此时剩下的即为素数。
#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,n,a[101];
	for (i=1;i<=100;i++)
	{
		a[i]=i;
	}
	a[1]=0;
	for (i=2;i<sqrt(100);i++)
		for (j=i+1;j<=100;j++)
		{
			if(a[i]!=0 && a[j]!=0)
				if (a[j]%a[i]==0)
					a[j]=0;
		}
	printf("100以内的素数有：\n");
	for (i=2,n=0;i<=100;i++)
	{ 	
		if(a[i]!=0)
			{
			printf("%3d",a[i]);
			n++;
			}
	
		if (n==10)
		{
			printf("\n");
			n=0;
		}
	}
	printf("\n");
	return 0;
}
