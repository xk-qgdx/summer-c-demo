#include<stdio.h>
typedef struct student{
    int id;
    char name [20];
    int score;
}stu;
int main(){
    stu.s1={100;"zhangsan",98};
    stu *p=&s1;
    printf("学号：%d,姓名：%s,分数：%d\n",p->id,p->name,p->score);
    return 0;
}