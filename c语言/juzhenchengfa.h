#include<stdio.h>
void juzhenchengfa()
{
	int i, j, k,w;
	int juzhen23[2][3];
	int juzhen32[3][2];
	int result[2][2];
	printf("��Ϊ2��3����ֵ��\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &juzhen23[i][j]);
		}
	}
	printf("��Ϊ3��2����ֵ��\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf_s("%d", &juzhen32[i][j]);
		}
	}
	for (i = 0; i < 2; i++)//����2��3�������
	{
		for (j = 0; j < 2; j++)//����3��2�������
		{
			int temp = 0;
			for (k = 0; k < 3; k++)//��ӦԪ��������
			{
				temp += juzhen23[i][k] * juzhen32[k][j];
			}
			result[i][j] = temp;
		}
	}
	printf("��������˺�\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
	printf("��ѡ��1���������� 2���鿴�����ҵ\n");
	scanf_s("%d", &w);
	switch (w)
	{
	case 1:juzhenchengfa();
	case 2:break;
	default:printf("error!\n"); break;
	}
}
