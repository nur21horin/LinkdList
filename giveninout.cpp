#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
int main(){
    Node* fst=new Node();
    fst->data=100;
    fst->next=nullptr;
    //secomd
    Node* tnd=new Node();
    tnd->data=200;
    tnd->next=nullptr;
    fst->next=tnd;

    //third
    Node* rd=new Node();
    rd->data=300;
    rd->next=nullptr;
    tnd->next=rd;

    Node* temp=fst; 

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}