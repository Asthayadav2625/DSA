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
// void Display(struct Node *p)
// {
//     while (p!= NULL)
//     {
//         printf("%d ", p->data);
//         p = p->next;
//     }
// }
void display(struct Node *p){
    if(p){
    display(p->next);
    printf("%d ",p->data);
    }
}
int main()
{ 
    //struct Node *temp;
    int A[] = {2, 4, 6, 10, 14, 20};
    Create(A, 6);
    display(First);
    return 0;
}