#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
void shuzusushu()
{
	int j, k,w,m=0;
	int a[10], i, t;
	srand(time(0));
	for (i = 0; i <= 9; i++)
	{
		a[i] = rand() % 100 + 2;
		printf("%d ", a[i]);
	}
	

	for (i = 0; i < 9; i++)
	{
		k = sqrt(a[i]);
		for (j = 2; j <= k; j++)if (a[i] % j == 0)break;
		if (j <= k)t = 0;
		else t = 1;
		if (t) 
		{
			printf("%d ", a[i]);
			m++;
		}
	}
	if (m > 0) printf("是数组内的素数\n");
	else printf("该数组内无素数\n");
	printf("请选择1、重新生成 2、查看别的作业\n");
	scanf_s("%d", &w);
	switch (w)
	{
	case 1:shuzusushu();
	case 2:break;
	default:printf("error!\n"); break;
	}
}
