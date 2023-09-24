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
//  int maxi(struct Node*p){
//     int max=0;
//     while(p)
// {
//     if(p->data>max){
//         max=p->data;
//     }
//     else{
//         p=p->next;
//     }

// } 
// return max;
// }
//finding maximum element using recursion
int Rmaxi(struct Node*p){
    int max=0;
    if(p==0)
      return 0;
    else{
        max=Rmaxi(p->next);
        if(max>p->data)
          return max;
        else
          return p->data;
    }
}
int main()
{ 
    //struct Node *temp;
    int A[] = {2, 4, 60, 10, 14, 20};
    Create(A, 6);
    printf("The maximum element is:%d",Rmaxi(First));
    return 0;
}