#include<iostream>
using namespace std;

void function(int arr[], int i, int length){
    int temp;
    if(i >=length/2){
        return;
    }
    //swap
    swap(arr[i], arr[length-i-1]);
    function(arr, i+1, length);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int length =  sizeof(arr)/sizeof(arr[0]);
    function(arr, 0 ,length);

    for (int i = 0; i < length; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}