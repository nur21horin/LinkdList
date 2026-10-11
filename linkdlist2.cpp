#include<iostream>
using namespace std;
class NOde{
    public:
    int head;
    NOde* next;
};
NOde deletin(NOde* head,int position){
    if(head==nullptr||position<1){
        return head;
    }
    if(position==1){
        NOde* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    for(int i=1;i<position-1 && current!=nullptr;i++){
        current=current->next;
    }
    if(current==NULL || current->next==nullptr){
        return;
    }
    NOde* temp=current->next;
    current->next=current->next->next;
    delete temp;
    return head;
}
int main(){
    NOde ai;
    ai.data=500;
    cout<<ai.data<<endl;
    NOde deletin(head,position);
    
}