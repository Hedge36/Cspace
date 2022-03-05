// 移动数字简介
// 有n个整数，使前面各数顺序向后移动m个位置，使得最后m个数变成最前面m个数。
#include <stdio.h>

int main() 
{
	void move(int[20],int,int);
	int number[20],n,m,i;
	printf("How many numbers(should less than 20)?   ");
	scanf("%d",&n);
	printf("input %d numbers:\n",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	printf("How many place you want to move?   ");
	scanf("%d",&m);
	move(number, n, m);
	printf("Now, they are:\n");
	for (i=0;i<n;i++)
	{
		printf("%d ",number[i]);
	}
	printf("\n");
	return 0;
}

void move(int array[20], int n, int m)
{
	int *p, array_end;
	array_end = *(array+n-1);
	for(p=array+n-1;p>array;p--)
	{
		*p = *(p-1);
	}
	*array = array_end;
	if (--m)
		{
			move(array,n,m);
		}
}
