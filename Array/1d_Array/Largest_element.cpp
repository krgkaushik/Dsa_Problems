#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int largestElement(int arr[], int n){
        //Write your code here...
        int  current =0;
        int start =0;
        int end =n;
        
        for(int i =0;i<n;i++){
            if(current<arr[i]){
            current = arr[i];
            }
            
        }
          return current;
            
       
        
        
    }
};