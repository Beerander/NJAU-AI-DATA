#include<stdio.h>
void loudou()
{
	int n, i, j, k, l, m,w;
	printf("����������n:");
	scanf_s("%d", &n);
	if (n % 2 != 0 && n <= 189)
	{
		for (j = 1; j <= n; j++)
		{
			for (i = 1; i <= (n + 1) / 2; i++)
			{
				if (j == i || j == (n + 1 - i))
				{
					for (k = 1; k <= i - 1; k++)printf(" ");
					for (l = 1; l <= n - 2 * (i - 1); l++)printf("*");
					for (m = 1; m <= i - 1; m++)printf(" ");
				}
			}
			printf("\n");
		}
	}
	else if (n % 2 == 0)
	{
		printf("������� ����������n\n"); loudou();
	}
	else {
		printf("��̫�� ��Ļʢ����\n"); loudou();
	}
	printf("��ѡ��1���������� 2���鿴�����ҵ\n");
	scanf_s("%d", &w);
	switch (w)
	{
	case 1:loudou();
	case 2:break;
	default:printf("error!\n"); break;
	}
}
