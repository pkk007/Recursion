#include<iostream>
using namespace std;

void function(int i,int n){
    if(i>n){
        return;
    }
    cout<<"PRABHAT"<<"\n";
    function(i+1,n);
}

int main(){
    int n;
    cout<<"give the number :";
    cin>>n;
    function(1,n);
}