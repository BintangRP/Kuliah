#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

int main()
{
    //deklarasi node
    //head and tail
    node *n;//head
    node *t;//tail
    node *h;

    //node alamat bantu untuk perantara
    node *bantu;

    n = new node;
    n->data =2;
    t=n;
    h=n;

    n = new node;
    n -> data=5;
    t->next =n;
    t=t->next;

    n = new node;
    n-> data =8;
    n->next=NULL;
    t->next=n;
    bantu=n;

    n = new node;
    n-> data=7;
    t->next =n;
    n->next=bantu;

    t=h;

    while(t!= NULL){
        cout << "Data : " << t->data << endl;
        t = t->next;
    }

    return 0;
}
