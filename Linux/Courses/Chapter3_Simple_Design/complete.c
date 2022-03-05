// 简介
// 输出1000以内所有的完数
// 完数是指一个数本身恰好等于它的各个因子之和。

#include<stdio.h>
int main()
{
	int m, s, i;
	for (m=2;m<1000;m++) 	// for m from 2 to 1000
	{
		s=0; 	// Sum of factors 
		for (i=1;i<m/2;i++) 	// to be more accurate, sqrt(m)
			if (m%i==0) s+=i;
		if (s==m)
		{
			printf("%d,its'factors are ",m);
			for (i=1;i<m/2;i++)
				if (m%i==0) printf("%d ",i); 	// to store in array is better
			printf("\n");
		}
	}
	return 0;
}
