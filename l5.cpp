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
class LinkdList{
    public:
    Node* head;
    LinkdList(){
        head=nullptr;
    }
    void insert(int data){
        Node* newNode=new Node(data);
        if(head==nullptr){
            head=newNode;
        }else{
            Node* temp=head;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            temp->next=newNode;
        }
            
    }

    void display(){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    }

};
int main(){
    LinkdList list;
    int n,data;
    cout<<"Enter the number of elements into inset"<<endl;

    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter elemet of data"<<i+1<<":";
        cin>>data;
    list.insert(data);
    }
    cout<<"The linked list"<<endl;
    list.display();
    return 0;
}