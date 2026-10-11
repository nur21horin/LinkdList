#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
       this->data=data;
        this->next=nullptr;
    }
};
Node* DeletePosition(Node* first,int position){
    if(first==nullptr||position<1){
        return first;
    }
    //head delete
    if(position==1){
        Node* temp=first;
        first=first->next;
        delete temp;
        return first;
    }
    //tarverse 
    Node* current=first;
    for(int i=1;i<position-1 && current!=nullptr;i++){
        current=current->next;
    }
    if(current!=nullptr||current->next==nullptr){
        return first;
    }
    Node* temp=current->next;
    current->next=current->next->next;
    delete temp;
    return first;
}
int main(){
    Node* first=new Node(100);
    first->data=100;
    first->next=nullptr;
    Node* second=new Node(200);
    second->data=200;
    second->next=nullptr;
    first->next=second;

    Node* third=new Node(300);
    third->data=300;
    third->next=nullptr;
    second->next=third;

    Node* fourth=new Node(400);
    fourth->data=400;
    fourth->next=nullptr;
    third->next=fourth;

    first=DeletePosition(first,2);

    Node* temp=first;
    while(first!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}