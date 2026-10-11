#include<iostream>
using namespace std;
class NODE{
    public:
    int data;
    NODE* next;

};
int main(){
    NODE ai;
    ai.data=300;
    //ai.next=700;
    ai.next=NULL;

    cout<<ai.data<<endl;
    if(ai.next==NULL){
        cout<<"NULL"<<endl;
    }
}