#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
#include<conio.h>
#include<mmsystem.h>
#include"yiyuanerci.h"
#include"wannianli.h"
#include"chazhaoshuzu.h"
#include"loudou.h"
#include"shuzusushu.h"
#include"studentgrade.h"
#include"xueshengjifen.h"
#include"juzhenchengfa.h"

#pragma comment(lib,"winmm.lib") 


void color(short x)	
{
	if (x >= 0 && x <= 5)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	else if(x>=6&&x<=10)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	else
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
}
void denglu();
void f();
void jiemian()
{
	system("cls");
	printf("              CCCCCCCCC                                          ******        ******                                                          \n");
	printf("            CCCCCCCCCCCCC                                     ************  ************                                            \n");
	printf("         CCCCCC        CCCCC                                ******************************                                                \n");
	printf("       CCC                CCCC                             ********************************                                                     \n");
	printf("      CC                   CCC                             ********************************                                                   \n");
	printf("     CC                      C                              ******************************                                                   \n");
	printf("     CC                                                       **************************                                                  \n");
	printf("     CC                                                         **********************                                                 \n");
	printf("     C                                                            ******************                      \n");
	printf("     C                                                              **************                    \n");
	printf("     CC                                                               **********                                           \n");
	printf("     CC                                                                 ******                                        \n");
	printf("     CC                      C                                            **                                   \n");
	printf("      CC                   CCC     T        EEE     SSSSSS      T             RR   RRRRRR    EEE     PPPPPPPPP        OOO       RR   RRRRRR     T\n");
	printf("       CCC                CCCC   TTTTT    EE   EE  SS        TTTTTT           RRRRR        EE   EE   PP       PP   OO      OO   RRRRR         TTTTTT\n");
	printf("         CCCCCC        CCCCC      TTT    EEEEEEEEE  SSSSSS     TTT            RR          EEEEEEEEE  PPPPPPPPP    OO        OO  RR              TTT\n");
	printf("            CCCCCCCCCCCCC          T  T   EE             SS    TT  T          RR          EE         PP            OO      OO   RR              TTT  T\n");
	printf("              CCCCCCCCC            TTT     EEEEEE   SSSSSS      TTT           RR            EEEEE    PP                OOO      RR                TTT  By.李志远\n");

}
void denglujiemian()
{
	int i,m;
	mciSendString("open 1.mp3", 0, 0, 0);//打开音乐
	mciSendString("play 1.mp3", 0, 0, 0);//播放音乐
	for (i = 20; i <= 102; i++)
	{
		system("cls");
		color(i%16);
		                     printf("              CCCCCCCCC                                          ******        ******                                                          \n");
	     	color((i+1)%16); printf("            CCCCCCCCCCCCC                                     ************  ************                                            \n");
	 	color((i + 2) % 16); printf("         CCCCCC        CCCCC                                ******************************                                                \n");
	   	color((i + 3) % 16); printf("       CCC                CCCC                             ********************************                                                     \n");
		 color((i + 4) % 16); printf("      CC                   CCC                             ********************************                                                   \n");
		 color((i + 5) % 16); printf("     CC                      C                              ******************************                                                   \n");
		 color((i + 6) % 16); printf("     CC                                                       **************************                                                  \n");
		 color((i + 7) % 16); printf("     CC                                                         **********************                                                 \n");
		 color((i + 8) % 16); printf("     C                                                            ******************                      \n");
		 color((i + 9) % 16); printf("     C                                                              **************                    \n");
		color((i + 10) % 16); printf("     CC                                                               **********                                           \n");
		color((i + 11) % 16); printf("     CC                                                                 ******                                        \n");
		color((i + 12) % 16); printf("     CC                      C                                            **                                   \n");
		color((i + 13) % 16); printf("      CC                   CCC     T        EEE     SSSSSS      T             RR   RRRRRR    EEE     PPPPPPPPP        OOO       RR   RRRRRR     T\n");
		color((i + 14) % 16); printf("       CCC                CCCC   TTTTT    EE   EE  SS        TTTTTT           RRRRR        EE   EE   PP       PP   OO      OO   RRRRR         TTTTTT\n");
		color((i + 14) % 16); printf("         CCCCCC        CCCCC      TTT    EEEEEEEEE  SSSSSS     TTT            RR          EEEEEEEEE  PPPPPPPPP    OO        OO  RR              TTT\n");
		color((i + 15) % 16); printf("            CCCCCCCCCCCCC          T  T   EE             SS    TT  T          RR          EE         PP            OO      OO   RR              TTT  T\n");
		color((i + 15) % 16); printf("              CCCCCCCCC            TTT     EEEEEE   SSSSSS      TTT           RR            EEEEE    PP                OOO      RR                TTT    By.李志远\n");
		Sleep(200);
		
	}
	color(11);
	printf("想再看一遍吗？\n1、再看一遍 2、我要登录\n");
	scanf_s("%d", &m);
	switch (m)
	{
	case 1:f();
	case 2:break;
	}
}
int mode()
{
		system("cls");
		int work;
		jiemian();
		printf("登录成功！假装正在加载作业…………\n");
		printf("\n—————————————————————————$lzy的小窝$——————————————————————————\n");
		printf("::                                            选择你要偷看的作业                                                 ::\n");
		printf("::                          9、退出程序         0、回到登陆界面     11、回到登录界面（跳过动画）                 ::\n");
		printf("::1、万年历 2、数组中查找数 3、学生分数生成 4、学生分数记录 5、数组素数输出 6、沙漏 7、一元二次方程 8、矩阵乘法  ::\n");
		printf("—————————————————————————————————————————————————————————\n");
		scanf_s("%d", &work);
		switch (work)
		{
		case 0:denglujiemian(); denglu();
		case 1:wannianli(); work = mode();
		case 2:chazhaoshuzu(); work = mode();
		case 3:studentgrade(); work = mode();
		case 4:xueshengjifen(); work = mode();
		case 5:shuzusushu(); work = mode();
		case 6:loudou(); work = mode();
		case 7:yiyuanerci(); work = mode();
		case 8:juzhenchengfa(); work = mode();
		case 9:exit(0);
		case 11:jiemian(); denglu();
		}
		return work;
}
int modemanagement()
{
	system("cls");
	int work,work1;
	jiemian();
	printf("登录成功！假装正在加载作业…………\n");
	printf("\n—————————————————————————$lzy的小窝$——————————————————————————\n");
	printf("::                                                   欢迎回家                                                    ::\n");
	printf("::                         0、回到登陆界面         9、退出程序      11、回到登录界面（跳过动画）                 ::\n");
	printf("::1、万年历 2、数组中查找数 3、学生分数生成 4、学生分数记录 5、数组素数输出 6、沙漏 7、一元二次方程 8、矩阵乘法  ::\n");
	printf("—————————————————————————————————————————————————————————\n");
	scanf_s("%d", &work);
	switch (work)
	{
	case 0:denglujiemian(); denglu();
	case 1:printf("1、查看效果 2、查看源代码\n"); 
		   scanf_s("%d", &work1); 
		   if (work1 == 1)
		   {
			   wannianli();
			   work = modemanagement();
		   }
		   else
		   {
			   printf("懒得你 自己去看自己代码去 不给你看\n");
			   getchar();
			   getchar();
			   work = modemanagement();
		   }
	case 2:printf("1、查看效果 2、查看源代码\n"); 
		   scanf_s("%d", &work1); 
		   if (work1 == 1)
		   {
			   chazhaoshuzu();
			   work = modemanagement();
		   }
		   else
		   {
			   printf("懒得你 自己去看自己代码去 不给你看\n");
			   getchar();
			   getchar();
			   work = modemanagement();
		   }
	case 3:printf("1、查看效果 2、查看源代码\n"); 
		   scanf_s("%d", &work1); 
		   if (work1 == 1)
		   {
			   studentgrade();
			   work = modemanagement();
		   }
		   else
		   {
			   printf("懒得你 自己去看自己代码去 不给你看\n");
			   getchar();
			   getchar();
			   work = modemanagement();
		   }
	case 4:printf("1、查看效果 2、查看源代码\n"); 
		   scanf_s("%d", &work1);
		   if (work1 == 1)
		   {
			   xueshengjifen();
			   work = modemanagement();
		   }
		   else
		   {
			   printf("懒得你 自己去看自己代码去 不给你看\n");
			   getchar();
			   getchar();
			   work = modemanagement();
		   }
	case 5:printf("1、查看效果 2、查看源代码\n"); 
		   scanf_s("%d", &work1); 
		   if (work1 == 1)
		   {
			   shuzusushu();
			   work = modemanagement();
		   }
		   else
		   {
			   printf("懒得你 自己去看自己代码去 不给你看\n");
			   getchar();
			   getchar();
			   work = modemanagement();
		   }
	case 6:printf("1、查看效果 2、查看源代码\n"); 
		   scanf_s("%d", &work1); 
		   if (work1 == 1)
		   {
			   loudou();
			   work = modemanagement();
		   }
		   else
		   {
			   printf("懒得你 自己去看自己代码去 不给你看\n");
			   getchar();
			   getchar();
			   work = modemanagement();
		   }
	case 7:printf("1、查看效果 2、查看源代码\n");
		   scanf_s("%d", &work1); 
		   if (work1 == 1)
		   {
			   yiyuanerci();
			   work = modemanagement();
		   }
		   else
		   {
			   printf("懒得你 自己去看自己代码去 不给你看\n");
			   getchar();
			   getchar();
			   work = modemanagement();
		   }
	case 8:printf("1、查看效果 2、查看源代码\n"); 
		   scanf_s("%d", &work1); 
		   if (work1 == 1)
		   {
			   juzhenchengfa();
			   work = modemanagement();
		   }
		   else
		   {
			   printf("懒得你 自己去看自己代码去 不给你看\n");
			   getchar();
			   getchar();
			   work = modemanagement();
		   }
	case 9:exit(0);
	case 11:jiemian(); denglu();
	}
	return work;
}
void denglu()
{
	char name[20], num[12],code[20];
	char AInum[30][20] = { {"11520101"},{"11520102"},{"11520103"},{"11520104"},{"11520105"},{"11520106"},{"11520107"},{"11520108"},{"11520109"},{"11520110"},{"11520112"},{"11520113"},{"11520114"},{"11520115"},{"11520116"},{"11520117"},{"11520118"},{"11520119"},{"11520120"},{"11520121"},{"11520122"},{"11520123"},{"11520124"},{"11520125"},{"11520126"},{"11520127"},{"11520128"},{"11520129"},{"11520130"},{"9203011720"} };
	char AIname[30][20] = { {"曾诚"},{"陈光宗"},{"陈逸杭"},{"董婷"},{"郭竞夷"},{"郭硕"},{"简汇佳"},{"孔令江"},{"冷发源"},{"李宏宇"},{"李孜璇"},{"刘森"},{"倪天洋"},{"彭郭静"},{"苏翔"},{"孙亦康"},{"王浩轩"},{"王若旭"},{"王涛"},{"魏雅婷"},{"吴瑞中"},{"吴伟"},{"徐俊"},{"许胜飞"},{"杨骏驰"},{"张晋志"},{"张炎"},{"赵璐"},{"邹志芝 "} ,{"沈奕鸣"} };
	char c='\0';
	int work,i=0,k=0;
	color(11);
	printf("\n——————————————————————————$登录$——————————————————————————\n");
	printf("::                                                                                                              ::\n");
	printf("::                                              请输入姓名及学号                                                 ::\n");
	printf("::                                                                                                              ::\n");
	printf("—————————————————————————————————————————————————————————\n");
	printf("姓名：");
	scanf_s("%s", name, 20);
	putchar('\n');
	if (strcmp(name, "AI") == 0)work = mode();
	printf("学号：");
	scanf_s("%s", num, 12);
	putchar('\n');
	if (strcmp(name, "李志远") == 0 && strcmp(num, "11520111") == 0)
	{
		printf("检测到您为管理员 请输入密码进入管理员界面\n");
		printf("请输入密码\n\n");
		while (i < 20 && c != 13) 
		{
			c = _getch();
			code[i++] = c;
			if (c != 13)putchar('*');
		}
		code[i] = '\0';
		if (strcmp(code, "711711\r") == 0)work = modemanagement();
		else 
		{
			printf("密码错误！回去登录！"); denglu();
		}

	}
	
	else
	{
		for (i = 0; i <= 29; i++)if (strcmp(name, AIname[i]) == 0 && strcmp(num, AInum[i]) == 0) 
		{
			k = 1; break;
		}
		
		if (k == 0)
		{
			printf("学号或姓名错误！\n");
			denglu();
		}
		else work = mode();
	}
}
void f()
{
	int a;
	printf("输入1开始展示\n");
	scanf_s("%d", &a);
	if (a == 1)
	{

		denglujiemian();
		denglu();
	}
}
int main()
{
	while (1)
	{
		f();
	}
}