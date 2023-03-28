//
// Created by 九厥。 on 2023/3/28.
//
#include"head.h"
void insert()
{
    char y[]="y";
    char n[]="n";
    a:	while (len < MAX)
{
    char ID[25];
    char b[20];
    printf("\t\t\t\t\t 请输入你录入的职工信息:\n ");
    printf("\t\t\t\t\t 请输入ID: ");
    scanf("%s", ID);
    for (int i = 0; i < MAX; i++)
    {
        if (strcmp(List[i].ID, ID) == 0)
        {
            printf("\t\t\t\t\t 编号重复!\n");
            goto a;
        }
    }
    strcpy(List[len].ID, ID);
    printf("\t\t\t\t\t 请输入职工的姓名: ");
    scanf("%s", List[len].Name);
    printf("\t\t\t\t\t 请输入职工的电话: ");
    scanf("%13s", List[len].Phone);
    printf("\t\t\t\t\t 请输入职工的性别: ");
    scanf("%s", List[len].Sex);
    printf("\t\t\t\t\t 请输入职工的学历: ");
    scanf("%s", List[len].Qua);
    printf("\t\t\t\t\t 请输入职工的住址: ");
    scanf("%s", List[len].Address);
    printf("\t\t\t\t\t 请输入职工的年龄: ");
    scanf("%s", List[len].year);
    printf("\t\t\t\t\t 请输入职工的工资: ");
    scanf("%s", List[len].mo);
    printf("\t\t\t\t\t 添加成功！\n");
    intext(&List[len]);
    printf("输入y继续录入，输入n返回到上级,输入其它来退出:");
    scanf("%s",b);
    if(strcmp(y,b)==0){
        goto a;
    }
    else if(strcmp(n,b)==0)
        return;
    else{
        printf("系统已退出！\n");
        bye();
    }
}
}


void Browse(Cad *head){
    Cad *find = head;
    printf("**********************************************************************************************************\n");
    for (int i = 0; i < len; i++)
    {
        printf(" 工号: %s", find[i].ID);
        printf(" 姓名: %s", find[i].Name);
        printf(" 电话：%s", find[i].Phone);
        printf(" 性别: %s", find[i].Sex);
        printf(" 学历: %s", find[i].Qua);
        printf(" 住址: %s", find[i].Address);
        printf(" 年龄: %s", find[i].year);
        printf(" 工资: %s\n", find[i].mo);
    }
    printf("**********************************************************************************************************\n");
}


void findforName()
{
    char F[20];
    char b[20];
    char y[]="y";
    char n[]="n";
    a:	printf("\t\t\t\t\t 请输入职工姓名: ");
    Cad *find = head;
    scanf("%s", F);
    while (strcmp(find->Name, "") != 0)
    {
        if (strcmp(find->Name, F) == 0)
        {
            printf("\t\t\t\t\t 职工工号: %s\n", find->ID);
            printf("\t\t\t\t\t 职工姓名: %s\n", find->Name);
            printf("\t\t\t\t\t 职工电话: %s\n", find->Phone);
            printf("\t\t\t\t\t 职工性别: %s\n", find->Sex);
            printf("\t\t\t\t\t 职工年龄: %s\n", find->year);
            printf("\t\t\t\t\t 职工学历: %s\n", find->Qua);
            printf("\t\t\t\t\t 职工住址: %s\n", find->Address);
            printf("\t\t\t\t\t 职工工资: %s\n", find->mo);
            printf("输入y继续查询，输入n返回到上级,输入其它来退出:");
            scanf("%s",b);
            if(strcmp(y,b)==0){
                goto a;
            }
            else if(strcmp(n,b)==0)
                return;
            else{
                printf("系统已退出！");
                bye();
            }
        }
        find++;

    }
}


void findforSex()
{
    char F[20];
    char b[20];
    char y[]="y";
    char n[]="n";
    a:	printf("\t\t\t\t\t 请输入职工性别: ");
    Cad *find = head;
    scanf("%s", F);
    while (strcmp(find->Name, "") != 0)
    {
        if (strcmp(find->Sex, F) == 0)
        {
            printf("\t\t\t\t\t 职工工号: %s\n", find->ID);
            printf("\t\t\t\t\t 职工姓名: %s\n", find->Name);
            printf("\t\t\t\t\t 职工电话: %s\n", find->Phone);
            printf("\t\t\t\t\t 职工性别: %s\n", find->Sex);
            printf("\t\t\t\t\t 职工年龄: %s\n", find->year);
            printf("\t\t\t\t\t 职工学历: %s\n", find->Qua);
            printf("\t\t\t\t\t 职工住址: %s\n", find->Address);
            printf("\t\t\t\t\t 职工工资: %s\n", find->mo);
            printf("输入y继续查询，输入n返回到上级,输入其它来退出:");
            scanf("%s",b);
            if(strcmp(y,b)==0){
                goto a;
            }
            else if(strcmp(n,b)==0)
                return;
            else{
                printf("系统已退出！");
                bye();
            }
        }
        find++;
    }
}


void findforQua()
{
    char F[20];
    char b[20];
    char y[]="y";
    char n[]="n";
    a:	printf("\t\t\t\t\t 请输入职工学历: ");
    Cad *find = head;
    scanf("%s", F);
    while (strcmp(find->Qua, "") != 0)
    {
        if (strcmp(find->Qua, F) == 0)
        {
            printf("\t\t\t\t\t 职工工号: %s\n", find->ID);
            printf("\t\t\t\t\t 职工姓名: %s\n", find->Name);
            printf("\t\t\t\t\t 职工电话: %s\n", find->Phone);
            printf("\t\t\t\t\t 职工性别: %s\n", find->Sex);
            printf("\t\t\t\t\t 职工年龄: %s\n", find->year);
            printf("\t\t\t\t\t 职工学历: %s\n", find->Qua);
            printf("\t\t\t\t\t 职工住址: %s\n", find->Address);
            printf("\t\t\t\t\t 职工工资: %s\n", find->mo);
            printf("输入y继续查询，输入n返回到上级,输入其它来退出:");
            scanf("%s",b);
            if(strcmp(y,b)==0){
                goto a;
            }
            else if(strcmp(n,b)==0)
                return;
            else{
                printf("系统已退出！");
                bye();
            }
        }
        find++;
    }
}


void findforAddress()
{
    char F[20];
    char b[20];
    char y[]="y";
    char n[]="n";
    a:	printf("\t\t\t\t\t 请输入职工住址: ");
    Cad *find = head;
    scanf("%s", F);
    while (strcmp(find->Name, "") != 0)
    {
        if (strcmp(find->Address, F) == 0)
        {
            printf("\t\t\t\t\t 职工工号: %s\n", find->ID);
            printf("\t\t\t\t\t 职工姓名: %s\n", find->Name);
            printf("\t\t\t\t\t 职工电话: %s\n", find->Phone);
            printf("\t\t\t\t\t 职工性别: %s\n", find->Sex);
            printf("\t\t\t\t\t 职工年龄: %s\n", find->year);
            printf("\t\t\t\t\t 职工学历: %s\n", find->Qua);
            printf("\t\t\t\t\t 职工住址: %s\n", find->Address);
            printf("\t\t\t\t\t 职工工资: %s\n", find->mo);
            printf("输入y继续查询，输入n返回到上级,输入其它来退出:");
            scanf("%s",b);
            if(strcmp(y,b)==0){
                goto a;
            }
            else if(strcmp(n,b)==0)
                return;
            else{
                printf("系统已退出！");
                bye();
            }
        }
        find++;

    }
}


void Modify()
{
    char F[20];
    char b[20];
    char y[]="y";
    char n[]="n";
    a:	printf("\t\t\t\t\t 请输入职工姓名: ");
    Cad *find = head;
    scanf("%s", F);
    while (strcmp(find->Name, "") != 0)
    {
        if (strcmp(find->Name, F) == 0)
        {

            printf("\t\t\t\t\t 请修改职工的姓名: ");
            scanf("%s", find->Name);
            printf("\t\t\t\t\t 请修改职工的电话: ");
            scanf("%13s", find->Phone);
            printf("\t\t\t\t\t 请修改职工的性别: ");
            scanf("%s", find->Sex);
            printf("\t\t\t\t\t 请修改职工的学历: ");
            scanf("%s", find->Qua);
            printf("\t\t\t\t\t 请修改职工的住址: ");
            scanf("%s", find->Address);
            printf("\t\t\t\t\t 请修改职工的年龄: ");
            scanf("%s", find->year);
            printf("\t\t\t\t\t 请修改职工的工资: ");
            scanf("%s", find->mo);
            printf("\t\t\t\t\t 职工信息修改成功！\n");
            intextWB(List);//保存到文件
            printf("输入y继续修改，输入n返回到上级,输入其它来退出:");
            scanf("%s",b);
            if(strcmp(y,b)==0){
                goto a;
            }
            else if(strcmp(n,b)==0)
                return;
            else{
                printf("系统已退出！");
                bye();
            }
        }
        find++;
    }
}


void del()
{
    static Cad Deitem;
    char F[20];
    char a[20];
    char y[]="y";
    Cad *find = head;
    printf("\t\t\t\t\t 请输入要删除职工的姓名: ");
    scanf("%s", F);
    while (strcmp(find->Name, "") != 0)
    {
        *find = *(find + 1);
        find++;
    }
    len--;
    printf("\t\t\t\t\t 删除成功！\n");
    intextWB(List);//保存文件
    printf("输入y以返回上级菜单:");
    scanf("%s",a);
    if(strcmp(y,a)==0)
        return;
    else{
        printf("系统已退出！\n");
        bye();
    }
}


void SortByID(Cad *head)
{
    Cad temp;
    Cad *find = head;
    for (int i = 0; i <len - 1; ++i)  //比较n-1轮
    {
        for (int j = 0; j < len - 1 - i; ++j)  //每轮比较n-1-i次,
        {
            if (strcmp(find[j].ID ,find[j + 1].ID)<0)
            {
                temp = find[j];
                find[j] = find[j + 1];
                find[j + 1] = temp;
            }
        }
    }
    printf("\t\t\t\t\t 按工号排序如下:  \n");
    for (int i = 0; i < len; i++)
    {
        printf(" 工号: %s", find[i].ID);
        printf(" 姓名: %s", find[i].Name);
        printf(" 电话：%s", find[i].Phone);
        printf(" 性别: %s", find[i].Sex);
        printf(" 学历: %s", find[i].Qua);
        printf(" 住址: %s", find[i].Address);
        printf(" 年龄: %s", find[i].year);
        printf(" 工资: %s\n", find[i].mo);
    }
}


void SortByWages(Cad *head)
{
    Cad temp;
    Cad *find = head;
    for (int i = 0; i <len - 1; ++i)  //比较n-1轮
    {
        for (int j = 0; j < len - 1 - i; ++j)  //每轮比较n-1-i次,
        {
            if (strcmp(find[j].mo ,find[j + 1].mo)<0)
            {
                temp = find[j];
                find[j] = find[j + 1];
                find[j + 1] = temp;
            }
        }
    }
    printf("\t\t\t\t\t 按工资排序如下:  \n");
    for (int i = 0; i < len; i++)
    {
        printf(" 工号: %s", find[i].ID);
        printf(" 姓名: %s", find[i].Name);
        printf(" 电话：%s", find[i].Phone);
        printf(" 性别: %s", find[i].Sex);
        printf(" 学历: %s", find[i].Qua);
        printf(" 住址: %s", find[i].Address);
        printf(" 年龄: %s", find[i].year);
        printf(" 工资: %s\n", find[i].mo);
    }
}


void SortByYear(Cad *head)
{
    Cad temp;
    Cad *find = head;
    for (int i = 0; i <len - 1; ++i)  //比较n-1轮
    {
        for (int j = 0; j < len - 1 - i; ++j)  //每轮比较n-1-i次,
        {
            if (strcmp(find[j].year ,find[j + 1].year)<0)
            {
                temp = find[j];
                find[j] = find[j + 1];
                find[j + 1] = temp;
            }
        }
    }
    printf("\t\t\t\t\t 按年龄排序如下:  \n");
    for (int i = 0; i < len; i++)
    {
        printf(" 工号: %s", find[i].ID);
        printf(" 姓名: %s", find[i].Name);
        printf(" 电话：%s", find[i].Phone);
        printf(" 性别: %s", find[i].Sex);
        printf(" 学历: %s", find[i].Qua);
        printf(" 住址: %s", find[i].Address);
        printf(" 年龄: %s", find[i].year);
        printf(" 工资: %s\n", find[i].mo);
    }
}


void SortMenu()
{
    int choice;
    a:	do
{
    printf("\t\t\t\t\t 1.按工号排序\n");
    printf("\t\t\t\t\t 2.按工资排序\n");
    printf("\t\t\t\t\t 3.按年龄排序\n");
    printf("\t\t\t\t\t 0.返回到上级\n");
    printf("\t\t\t\t\t 请选择: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 0:return;
        case 1:SortByID(List); break;
        case 2:SortByWages(List); break;
        case 3:SortByYear(List); break;
        default: printf("请输入正确选项\n"); goto a;
    }
} while (choice>=0&&choice<=3);
}


void findMenu()
{
    int choice;
    a:	do
{
    printf("\t\t\t\t\t 1.按姓名查询\n");
    printf("\t\t\t\t\t 2.按性别查询\n");
    printf("\t\t\t\t\t 3.按学历查询\n");
    printf("\t\t\t\t\t 4.按住址查询\n");
    printf("\t\t\t\t\t 0.返回到上级\n");
    printf("\t\t\t\t\t 请选择: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 0:return;
        case 1:findforName(); break;
        case 2:findforSex(); break;
        case 3:findforQua(); break;
        case 4:findforAddress(); break;
        default: printf("请输入正确选项\n"); goto a;
    }


} while (choice>=0&&choice<=4);
}


void intext(Cad *head)
{

    Cad *pin = head;
    FILE *fp = fopen("Cad.txt", "a+");
    if (fp == NULL)
    {
        printf("\t\t\t\t\t 打开文件失败\n");
        exit(0);
    }
    len++;
    fwrite(pin, sizeof(*pin), 1, fp);
    fclose(fp);

}


void outtext(Cad *head)
{
    FILE *fp = fopen("Cad.txt", "r");
    if (fp == NULL) // 判断是否打开了文件
    {
        printf("\t\t\t\t\t打开文件失败\n");
        exit(0);
    }

    fseek(fp, 0L, SEEK_END); // 将文件指针定位到文件结尾
    int size = ftell(fp); // 计算整个文件的长度
    rewind(fp); // 将文件指针定位到文件开头

    int total = size / sizeof(Cad); // 计算一共有多少个数据

    int len = 0; // 定义数组下标

    // 确保文件中的内容输出
    while (total > 0 && len < MAX)
    {
        fread(&List[len], sizeof(Cad), 1, fp); // 读取数据到数组
        total--;
        len++;
    }

    fclose(fp); // 关闭文件

    return;
}


void intextWB(Cad *head)
{

    Cad *pin = head;
    FILE *fp = fopen("Cad.txt", "w");//以更新模式打开，截断现有文件长度，从新写入数据
    if (fp == NULL)
    {
        printf("\t\t\t\t\t 打开文件失败\n");
        exit(0);
    }
    else
    {
        int i = 0;
        while (i<len)
        {
            fwrite(&List[i], sizeof(List[i]), 1, fp);
            i++;
        }
        fclose(fp);
    }
}


void Remake()
{
    char a[]="我明白";
    char b[20];
    printf("注意：此项操作不可撤回！\n");
    printf("输入'我明白'以继续:");
    scanf("%s",b);
    if(strcmp(a,b)==0)
    {
        FILE *fp = fopen("Cad.txt", "w+");
        if (fp == NULL)
        {
            printf("\t\t\t\t\t 打开文件失败\n");
            exit(0);
        }
        fclose(fp);
        printf("请重新启动本程序！\n");
        bye();
    }
    else{
        printf("您取消了操作，已返回到上级\n");
        return;
    }
}


void menu(){
    printf("\t\t\t\t\t职 工 信 息 管 理 系 统\n");
    printf("\t\t\t\t==================菜 单==================\n ");
    printf("\t\t\t\t\t①.职工信息录入\n ");
    printf("\t\t\t\t\t②.职工信息浏览\n ");
    printf("\t\t\t\t\t③.职工信息修改\n ");
    printf("\t\t\t\t\t④.职工信息查询\n ");
    printf("\t\t\t\t\t⑤.职工信息删除\n ");
    printf("\t\t\t\t\t⑥.职工信息排序\n ");
    printf("\t\t\t\t\t⑦.删除所有信息\n ");
    printf("\t\t\t\t\t⑧.修改密码\n ");
    printf("\t\t\t\t\t⑨.退出系统\n ");
    printf("\t\t\t\t=========================================\n ");
}


void write(){
    FILE *fp;
    fp = fopen("mima.txt", "w+");
    if((fp=fopen("mima.txt","w+"))==NULL)
    {
        printf("不能打开文件!\n");
        exit(0);
    }
    fprintf(fp,"%s",mima2);
    fclose(fp);
    return;
}


void read(){
    FILE *fp;
    if((fp=fopen("mima.txt","r"))==NULL){
        printf("不能打开文件！\n");
        exit(0);
    }
    fscanf(fp,"%s",mima1);
    fclose(fp);
    return;
}


void xiugai()
{
    char oldmima[20];
    char newmima2[20];
    char newmima1[20];
    char shuru[20];
    printf("请输入旧密码：");
    scanf("%s",shuru);
    strcpy(oldmima,mima1);
    a:	if(strcmp(oldmima,shuru)==0){
    printf("请输入新密码：");
    scanf("%s",newmima1);
    printf("请再次输入新密码：");
    scanf("%s",newmima2);
    if(strcmp(newmima1,newmima2)!=0){
        printf("两次密码不一致，请重试！\n");
        goto a;
    }
    else{
        printf("密码修改成功，请重新登录！\n");
        strcpy(mima2,newmima2);
        write();
        bye();
    }
}
}


void zhaohui(){
    a:	printf("请输入初始密码：");
    char admin[20];
    scanf("%s",admin);
    if(strcmp(chushi,admin)==0){
        read();

        printf("您的密码为：%s\n",mima1);
        printf("请重新登陆！\n");
        bye();
    }
    else{
        printf("初始密码错误！请重试！\n");
        goto a;
    }
}


void bye(){
    printf("\t\t\t\t--------------【感谢您的使用】------------\n");
    printf("\t\t\t\t------------【职工信息管理系统】----------\n");
    printf("\t\t\t\t------------陈凯杰---2021-6-27------------\n");
    printf("\t\t\t\t------------------------------------------\n");
    exit(0);
}