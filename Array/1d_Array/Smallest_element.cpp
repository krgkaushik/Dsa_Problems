#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int smallestElement(int arr[], int n){
        //Write your code here...
        int current = arr[0] ;
        for(int i=0; i<n; i++){
            if(current>arr[i]){
                current = arr[i];
            }
        }
        return current;
        
        
    }
};