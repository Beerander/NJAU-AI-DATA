#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void chazhaoshuzu()
{
	int a[10];
	int i, n, j, temp, min = 0, max = 9, mid = 0,m;
	srand(time(NULL));
	for (i = 0; i <= 9; i++) a[i] = rand() % 100 + 1;
	printf("������ɵ�����Ϊ��\n");
	for (i = 0; i <= 9; i++)printf("%d ", a[i]);
	printf("\n�����㿴����������� ��������Ҫ���ҵ�����");
	scanf_s("%d", &n);
	for (i = 0; i < 9; i++)
		for (j = 0; j < 9 - i; j++)
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
	while (min <= max)
	{
		mid = min + (max - min) / 2;
		if (a[mid] == n)
			break;
		else if (a[mid] < n)
			min = mid + 1;
		else if (a[mid] > n)
			max = mid - 1;
	}
	if (min <= max)
	{
		printf("�����ڴ�������\n�����ѡ��1����һ��������� 2��͵�������ҵ\n");
		scanf_s("%d", & m);
		switch (m)
		{
		case 1:chazhaoshuzu();
		case 2:break;
		}
	}
	else
	{
		printf("����\n�����ѡ��1����һ��������� 2���鿴�����ҵ\n");
		scanf_s("%d", &m);
		switch (m)
		{
		case 1:chazhaoshuzu();
		case 2:break;
		default:printf("error!\n"); break;
		}
	}

}
