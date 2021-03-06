/*************************************************************************
	> File Name: 02.1FixError.c
	> Author: Yaning Wang, CS1607
	> Mail: wangyanign6166@gmail.com
	> School: HUST
	> Created Time: 2017年05月15日 星期一 23时35分19秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
struct s_list{
    int data;
    struct s_list* next;
};
void create_list(struct s_list**head_p, int*p);
// 修改使之成为栈
int main(void){
    struct s_list*head = NULL, *p;
    int s[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    create_list(&head, s);
    p = head;
    while(p){
        printf("%d\t", p->data);
        p = p->next;
    }
    printf("\n");
    return 0;
}
void create_list(struct s_list**headp, int*p){
    struct s_list*head = NULL, *tail; // 创建暂时的头
    head = (struct s_list*)malloc(sizeof(struct s_list));
    head->next = NULL; //后继无人， 赋值为空指针
    head->data = *p++;
    tail = head; // 尾指针存储head
    while(*p){
        // 现在就是在头上开新空间
        head = (struct s_list*)malloc(sizeof(struct s_list));
        head->data = *p++;
        head->next = tail; // 指向原来的头
        tail = head; // 保存头
    }
    *headp = head;
}
