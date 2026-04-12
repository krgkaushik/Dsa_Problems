#include<iostream>
using namespace std;

void learSearch(int arr[], int key){
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Element found at index "<<i<<endl;
            return;
        }
        else{
            cout<<"Element not exits in the array"<<endl;
        }
    }
}

int main(){
    return 0;
}