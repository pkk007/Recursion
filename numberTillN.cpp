#include<iostream>
using namespace std;

void function(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<"\n";
    function(i+1,n);
}

int main(){
    int n;
    printf("enter the ending number : ");
    cin>>n;
    function(1,n);
}