#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

int main()
{
    //awalin node
    node *n;
    node *t;
    node *h;

    //deklarasiin head and tail
    n = new node;
    n -> data = 1;
    t = n;
    h = n;

    //deklarasiin head and tail
    n = new node;
    n -> data = 2;
    t -> next = n;
    t = t -> next;

    n = new node;
    n -> data = 3;
    t -> next = n;
    n -> next  = NULL;
    t = h;

    while ( t!= NULL){
        cout << "Data : "<< t->data << endl;
        t= t->next;
    }
    return 0;
}
