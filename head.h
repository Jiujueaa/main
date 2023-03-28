//
// Created by 九厥。 on 2023/3/28.
//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 40
typedef struct Cad
{
    char Name[30];//姓名
    char Phone[30];//电话
    char Sex[30];//性别
    char Qua[30];//学历
    char Address[30];//住址
    char ID[30];//职工号
    char year[30];//年龄
    char mo[30];//工资
}Cad;

static Cad List[MAX];
static char *Address[MAX];
static int number[MAX];
static int Jnumber[MAX];
static int len = 0;
Cad *head = List;
Cad *end = List + MAX;
char mima2[20];
char mima1[10];
char newmima[20];
char chushi[]="1234";//初始密码

void insert();//录入函数
void findforName();//按名字查询
void findforSex();//按性别查询
void findforQua();//按学历查询
void findforAddress();//按住址查询
void SortByID(Cad *head);//按id排序
void SortByWages(Cad *head);//按工资排序
void SortByYear(Cad *head);//按年龄排序
void SortMenu();//排序菜单
void Modify();//修改函数
void del();//删除函数
void findMenu();//查询菜单
void intext(Cad *head);//载入文本
void outtext(Cad *head);//输入到程序中
void intextWB(Cad *head);//刷新输入到文本（文本中新增项）
void Browse(Cad *head);//浏览函数
void menu();//菜单函数
void Remake();//恢复函数
void xiugai();//修改密码
void read();//文件读出
void write();//文件写入
void zhaohui();//找回密码
void bye();//结束标语