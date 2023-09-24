  #include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*First = NULL;

// Creation of linked list

void Create(int A[], int n)
{
    struct Node *t, *Last;
    First = (struct Node *)malloc(sizeof(struct Node));
    First->data = A[0];
    First->next = NULL;
    Last = First;
    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        Last->next = t;
        Last = t;
    }
}
//display linked list
void Display(struct Node *p)
{
    while (p!= NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
//counting number of nodes
int count(struct Node*p){
    int c=0;
    while(p!=0){
        c++;
        p=p->next;
    }
    return c;
}
//searching in linked list
struct Node*searching(struct Node*p,int key){
    p=First;
    while(p!=NULL){
        if(key==p->data){
            return p;
        }
        else{
            p=p->next;
        }
    }
    return NULL;
}
int main()
{ 
    //struct Node *temp;
    int A[] = {2, 4, 6, 10, 14, 20};
    Create(A, 6);
    printf("%d\n",count(First));

    struct Node*temp=searching(First,20);
    printf("%d",temp->data);
    //Display(First);
    return 0;
}