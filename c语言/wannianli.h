#include<stdio.h>
void wannianli()
{
	int year, month, day, day_y = 365, i, daysum = 0, feb = 28, week, daym = 0, day_year = 0,w;
	printf("请输入年月日 如“2000.1.1”（不得早于2000年）\n");
	scanf_s("%d.%d.%d", &year, &month, &day);
	for (i = 2000; i <= year - 1; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))day_y = 366;
		else day_y = 365;
		daysum += day_y;
	}
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))feb = 29;
	switch (month)
	{
	case 12:daym += 30;
	case 11:daym += 31;
	case 10:daym += 30;
	case 9:daym += 31;
	case 8:daym += 31;
	case 7:daym += 30;
	case 6:daym += 31;
	case 5:daym += 30;
	case 4:daym += 31;
	case 3:daym += feb;
	case 2:daym += 31;
	}
	day_year = daym + day;
	daysum += daym + day + 5;
	week = daysum % 7;
	printf("这一天是%d年第%d天星期", year, day_year);
	switch (week)
	{
	case 0:printf("日\n"); break;
	case 1:printf("一\n"); break;
	case 2:printf("二\n"); break;
	case 3:printf("三\n"); break;
	case 4:printf("四\n"); break;
	case 5:printf("五\n"); break;
	case 6:printf("六\n"); break;
	}
	printf("请选择1、继续查找 2、查看别的作业");
	scanf_s("%d",&w);
	switch (w)
	{
	case 1:wannianli();
	case 2:break;
	default:printf("error!\n"); break;
	}
}
