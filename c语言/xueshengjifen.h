#include<stdio.h>
struct grade
{
	int num;
	char name[20];
	float score[3];
	float avesc;
};
void xueshengjifen()
{
	struct grade* p;
	struct grade st[10];
	printf("����������ѧ�� ���� �γ�1���� �γ�2���� �γ�3����\n��1 ��־Զ 100 100 100\n");
	for (p = st; p < st + 3; p++)scanf_s("%d%s%f%f%f", &p->num, &p->name, 20, &p->score[0], &p->score[1], &p->score[2]);
	float* pi, s = 0, * pm = st[0].score;
	int m = 0, i,w;
	printf("ƽ���ɼ�Ϊ:\n");
	for (p = st; p < st + 3; p++)
	{
		for (pi = (*p).score; pi < (*p).score + 3; pi++)s += *pi;
		(*p).avesc = s / 3;
		s = 0;
		printf("num��%d grade:%f \n", p->num,p->avesc);
	}
	for (i = 0; i <= 2; i++)if (st[i].avesc > st[m].avesc)m = i;
	printf("ƽ���ɼ���ߵ�ѧ��Ϊ\nnum:%d name:%s score:%.2f %.2f %.2f average:%.2f\n", st[m].num, st[m].name, st[m].score[0], st[m].score[1], st[m].score[2], st[m].avesc);
	printf("��ѡ��1��������¼ 2���鿴�����ҵ\n");
	scanf_s("%d", &w);
	switch (w)
	{
	case 1:xueshengjifen();
	case 2:break;
	default:printf("error!\n"); break;
	}
}
