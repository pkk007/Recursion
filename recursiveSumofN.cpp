#include<iostream>
using namespace std;

int funtion(int n){
    if(n<=0){
        return 0;
    }
    return n + funtion(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<funtion(n);
}