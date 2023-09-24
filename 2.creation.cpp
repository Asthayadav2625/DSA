#include <iostream>
using namespace std;
class node
{
public:
    int data;
    class node *next;
    void create(int A[], int n);
    void display(class node *p);
} *first = NULL;
void node::create(int A[], int n)
{
    class node *t, *last;
    first = new node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i = 0; i < n; i++)
    {
        t = new node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void node::display(class node *p)
{
    p = first;
    while (p != 0)
    {
        cout << p->data << endl;
        p = p->next;
    }
}
int main()
{
    int A[] = {2, 34, 232, 46, 3, 6, 11};
    node obj;
    obj.create(A, 7);
    obj.display(first);
    return 0;
}