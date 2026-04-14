#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int secondLargestElement(int arr[], int n){
        //Write your code here...
       int largest = INT_MIN;
       int secondLargestElement = INT_MIN;
       
       for(int i=0;i<n;i++){
           if(arr[i]>largest){
               secondLargestElement = largest;
               largest = arr[i];
           }
           else if (arr[i]> secondLargestElement && arr[i] != largest){
               secondLargestElement = arr[i];
           }
       }
       if(secondLargestElement== INT_MIN){
           return -1;
       }
        return secondLargestElement;
        
    }
};