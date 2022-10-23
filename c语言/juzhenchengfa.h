#include<stdio.h>
void juzhenchengfa()
{
	int i, j, k,w;
	int juzhen23[2][3];
	int juzhen32[3][2];
	int result[2][2];
	printf("请为2×3矩阵赋值：\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &juzhen23[i][j]);
		}
	}
	printf("请为3×2矩阵赋值：\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf_s("%d", &juzhen32[i][j]);
		}
	}
	for (i = 0; i < 2; i++)//控制2×3矩阵的行
	{
		for (j = 0; j < 2; j++)//控制3×2矩阵的列
		{
			int temp = 0;
			for (k = 0; k < 3; k++)//对应元素相乘相加
			{
				temp += juzhen23[i][k] * juzhen32[k][j];
			}
			result[i][j] = temp;
		}
	}
	printf("两矩阵相乘后：\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
	printf("请选择1、继续计算 2、查看别的作业\n");
	scanf_s("%d", &w);
	switch (w)
	{
	case 1:juzhenchengfa();
	case 2:break;
	default:printf("error!\n"); break;
	}
}
