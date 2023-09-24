//sum of elements of linked list
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
//sum using LOOPS
int sum(struct Node*p){
    int s=0;
    while(p){
        s=s+p->data;
        p=p->next;
    }
    return s;
}
//finding sum using recursion
int sum(struct Node*p){
     
    if(p==0)
     return 0;
    else{
        return sum(p->next)+p->data;
    }
}
int main()
{ 
    //struct Node *temp;
    int A[] = {4, 6, 10, 10, 10, 20};
    Create(A, 6);
     printf("The sum of elements is:%d",sum(First));
    return 0;
}