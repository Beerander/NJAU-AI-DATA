#include<stdio.h>
#include<math.h>
void ax(double a, double b, double c); 
void bx(double a, double b, double c);
void cx(double a, double b, double c);
void yiyuanerci()
{
    int w; 
    double a, b, c;
    printf("��������η�ϵ����");
    scanf_s("%lf", &a);
    printf("\n������һ�η�ϵ����");
    scanf_s("%lf", &b);
    printf("\n�����볣���");
    scanf_s("%lf", &c);
    if (a < 0) 
    {
        a = -a;
        b = -b;
        c = -c;
    }
    if (a == 0)printf("���̲��Ƕ��η��� �÷��̽���һ��x=%.2lf\n",-c/b);
    else if (b * b - 4 * a * c > 0)
        ax(a, b, c);//�������ȵ�ʵ������
    else if (b * b - 4 * a * c == 0)
        bx(a, b, c);//������ȵ�ʵ������
    else if (b * b - 4 * a * c < 0)
        cx(a, b, c);//��������
    printf("��ѡ��1���ټ���һ������ 2���鿴�����ҵ\n");
    scanf_s("%d", &w);
    switch (w)
    {
    case 1:yiyuanerci();
    case 2:break;
    default:printf("error!\n");  break;
    }
}
void ax(double a, double b, double c)
{
    double x0, x1, x2;
    x0 = sqrt(double(b * b - 4 * a * c));
    x1 = (-b + x0) / (2.0 * a);
    x2 = (-b - x0) / (2.0 * a);
    printf("x1=%.2lf x2=%.2lf\n", x1, x2);
}

void bx(double a, double b, double c)
{
    double x = -b / (2.0 * a);
    printf("x1=x2=%.2lf\n", x);
}

void cx(double a, double b, double c)
{

    double m = -b / (2.0 * a);
    double n = sqrt(-(b * b - 4 * a * c)) / (2.0 * a);
    printf("x1=%.2lf+%.2lfi x2=%.2lf-%.2lfi\n", m, n, m, n);
}

