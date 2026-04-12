#include<iostream>
using namespace std;

int main(){
    
    int arr[]={1,2,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i =0;
    int j = n-1;

    swap(arr[i],arr[j]);
    for(int k =0 ; k<n; k++){
        cout<<arr[k]<<" ";
    }
   



     return 0;
}