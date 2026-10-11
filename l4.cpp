#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
int main(){
    Node* head=new Node();
    head->data=100;
    head->next=nullptr;
    //second value
    Node* head1=new Node();
    head1->data=200;
    head1->next=nullptr;
    head->next=head1;
    //third value
    Node* head2=new Node();
    head2->data=300;
    head2->next=nullptr;
    head1->next=head2;

    //printf fuction
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    cout<<endl;
    cout<<temp->data<<endl;

    

}