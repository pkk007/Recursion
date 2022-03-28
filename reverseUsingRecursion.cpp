#include<iostream>
using namespace std;

void reverse(int arr[], int l, int r){
    int temp;
    if(l<=r){
        return;
    }

    //swap
    temp = arr[r];
    arr[r] = arr[l];
    arr[l] = temp;

    reverse(arr, l+1,r-1);

}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int length = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, 0,length-1);
    
    for (int i = 0; i < length; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}