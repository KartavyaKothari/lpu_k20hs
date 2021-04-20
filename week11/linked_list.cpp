#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    Node *next;
    int data;
    
    Node(int d){
        data = d;
        next = nullptr;
    }
};

void print_list(Node *head){
    Node *q = head;

    while(q!=nullptr){
        cout<<q->data<<" ";
        q = q->next;
    }
}

int main(){
    Node *A = new Node(10);
    Node *B = new Node(20);
    Node *C = new Node(30);

    A->next = B;
    B->next = C;

    print_list(A);
    return 0;
}