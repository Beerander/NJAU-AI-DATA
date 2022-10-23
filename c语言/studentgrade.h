#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void studentgrade()
{
	int i, j, x, y,w;
	float a[11][6], s2r;
	float s = 0, s2 = 0, sr = 0;;
	float mx = a[0][0];
	a[10][5] = '\0';
	srand(time(NULL));
	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 4; j++)a[i][j] = rand() % 100 + 1;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 4; j++)s += a[i][j];
		a[i][5] = s / 5;
		s = 0;
	}
	for (j = 0; j <= 4; j++)
	{
		for (i = 0; i <= 9; i++)s += a[i][j];
		a[10][j] = s / 10;
		s = 0;
	}

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 4; j++)if (a[i][j] > mx)
		{
			mx = a[i][j];
			x = i + 1, y = j + 1;
		}
	for (i = 0; i <= 9; i++)
	{
		s += a[i][5];
		s2 += pow(a[i][5], 2);
	}
	sr = s2 / 10 - pow(s / 10, 2);
	printf("最高学生与课程有序数对为(%d,%d)\n平均分方差为%f\n", x, y, sr);
	printf("          语文  数学  外语  物理  化学  学生平均分\n");
	for (i = 0; i <= 10; i++)
	{
		if(i<10)printf("student%d: ", i + 1);
		if (i == 10)printf("课程平均分:");
		for (j = 0; j <= 5; j++)if(a[i][j]!=0)printf("%5.1f ", a[i][j]);
		putchar('\n');
	}
	printf("请选择1、继续生成 2、查看别的作业\n");
	scanf_s("%d", &w);
	switch (w)
	{
	case 1:studentgrade();
	case 2:break;
	default:printf("error!\n"); break;
	}

}
