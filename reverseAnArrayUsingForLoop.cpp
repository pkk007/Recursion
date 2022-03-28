#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int temp;
    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i=0, j=length-1; i<length/2; i++,j-- ){
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }

    //print
    for (int j = 0; j < length; j++)
    {
        cout<<arr[j]<<" ";
    }

    cout<<"\n";

    cout<<length;
    
}