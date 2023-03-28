//
// Created by 九厥。 on 2023/3/28.
//
#include"function.c"
int main()
{
    outtext(head);
    int choice;
    int duru, shu;
    char mima[10];
    char A[10];
    char y[]="y";
    read();
    printf("请输入密码：");
    scanf("%s", mima);
    if (strcmp(mima1, mima) == 0)
    {
        a:	do
    {
        menu();
        printf("请输入你的选择");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:insert(); break;
            case 2:Browse(List); break;
            case 3:Modify(); break;
            case 4:findMenu(); break;
            case 5:del(); break;
            case 6:SortMenu(); break;
            case 7:Remake(); break;
            case 8:xiugai();break;
            case 9:printf("系统已退出!\n");bye();
            default:printf("您的输入有误，请重试！\n");goto a;
        }
    } while (choice != 0);
    }
    else
    {
        printf("是否找回密码？（按y继续）: ");
        scanf("%s",A);
        if(strcmp(y,A)==0)
            zhaohui();
        else{
            printf("请重新登录\n");
            bye();
        }
    }
}