#include<iostream>
using namespace std;

//parameterazied way

void function(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    function(i-1,sum+i);
}

int main(){
    int n;
    cin>>n;
    function(n,0);
}