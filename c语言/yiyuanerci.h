#include<stdio.h>
#include<math.h>
void ax(double a, double b, double c); 
void bx(double a, double b, double c);
void cx(double a, double b, double c);
void yiyuanerci()
{
    int w; 
    double a, b, c;
    printf("请输入二次方系数：");
    scanf_s("%lf", &a);
    printf("\n请输入一次方系数：");
    scanf_s("%lf", &b);
    printf("\n请输入常数项：");
    scanf_s("%lf", &c);
    if (a < 0) 
    {
        a = -a;
        b = -b;
        c = -c;
    }
    if (a == 0)printf("方程不是二次方程 该方程仅有一解x=%.2lf\n",-c/b);
    else if (b * b - 4 * a * c > 0)
        ax(a, b, c);//两个不等的实根函数
    else if (b * b - 4 * a * c == 0)
        bx(a, b, c);//两个相等的实根函数
    else if (b * b - 4 * a * c < 0)
        cx(a, b, c);//复根函数
    printf("请选择1、再计算一个方程 2、查看别的作业\n");
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

