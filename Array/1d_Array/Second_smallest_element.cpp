#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int secondSmallestElement(int arr[], int n){
        //Write your code here...
        int smallest = INT_MAX;
        int secondSmallestElement = INT_MAX;
        if(n<2){
            return -1;
        }
        
        for(int i=0; i<n;i++){
            if(arr[i]<smallest){
                secondSmallestElement = smallest;
                smallest =arr[i];
            }
            else if(arr[i]<secondSmallestElement && arr[i]!=smallest){
                secondSmallestElement = arr[i];
            }
            
        }
        if(secondSmallestElement== INT_MAX){
            return -1;
        }
        return secondSmallestElement;
        
        
        
    }
};