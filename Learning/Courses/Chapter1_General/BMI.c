/* BMI */
#include <stdio.h>

float weight, height, bmi;
int main()
{
	printf("请输入您的体重(kg):");
	scanf("%f",&weight);
	printf("请输入您的身高(cm):");
	scanf("%f",&height);

	bmi=weight/height/height*1e4;
	printf("您的BMI指数为%.2f\n",bmi);
	if (bmi>30.0)
		printf("肥胖");
	else if (bmi>25.0)
		printf("超重");
	else if (bmi>18.5)
		printf("正常");
	else
		printf("过轻");
	return 0;
}
