#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void manipulateArray(int arr[], int n, int k) {
        int mid;
        int i=0;
        if(n%2==0){
            mid = n/2 -1;
        }
        else{
            mid = n/2;
        }
        
       arr[mid]= arr[mid]*k;
       
       for(int i=0;i<n;i++){
           cout<<arr[i]<<" ";
       }
        
    }
};