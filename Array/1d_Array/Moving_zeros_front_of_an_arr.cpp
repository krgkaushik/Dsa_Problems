#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void moveZerosToFront(int arr[], int n){
        //Write your code here...
        int i = n-1;
        for(int j=n-1;j>=0;j--){
            if(arr[j]!=0){
                swap(arr[i],arr[j]);
                i--;
            }
            
            
        }
        
        
    }
};