#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* rightPtr;
};

Node* head = NULL;

void createLinkList(int data_){
    Node* p = new Node;
    p->data = data_;
    p->rightPtr = NULL;
    head = p;
}

void addNumber(int data_){
    Node* p = new Node;
    p->data = data_;
    p->rightPtr = NULL;

    Node* q = head;
    while(q!=NULL){
        q = q->rightPtr;
    }
    q->rightPtr = p;
    
}

void display(){
    Node* p = head;
    while(p!=NULL){
        cout << p->data << endl;
        p = p->rightPtr;
    }
}


int main(){

    createLinkList(1);
    display();

    return 0;
}
