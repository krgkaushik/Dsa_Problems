#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int search(int arr[], int n, int k){
        //Write your code here...
     
       int end = n;
       int count =0;
       for(int i=0;i<end;i++){
           if(arr[i]==k){
             return i;
           }
         
    
       }
       return -1;
       
     
      
        
        
    }
};