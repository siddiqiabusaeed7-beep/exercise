#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next ;
}*first = NULL;

void create (int A[],int n);
void display(struct node *p);


int main (void)
{
    int A[5] = {1,43,65,24,68};
    create(A,5);
    display(&first);
}

void create (int A[] ,int n)
{
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i = 1; i < n ; i++)
    {
        struct node * t ;
        t = (struct node * )malloc(sizeof(struct node ));
        t->data = A[i];
        last->next = t;
        t->next = last->next;
        last = t;
    }


}

void display(struct node *p)    //why is pointer always required
{
    while(p->next != NULL)
    {
        printf("%d",p->data);
        p = p->next ;
    }
}