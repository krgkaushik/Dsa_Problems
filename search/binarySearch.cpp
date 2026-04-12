#include<iostream>
using namespace std;

void binarySearch(int arr[],int n ,int key){
    int low = 0; int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == key){
            cout << mid;
            return ;
        }
        
        if(key<arr[mid]){
            low = 0 ;
            high = mid -1;
        }
        else if(key>arr[mid]){
            low = mid+1;
            high = n-1;
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
}


int main(){
    int arr[] = {3,4,5,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    binarySearch(arr,n,4);



    return 0;
}