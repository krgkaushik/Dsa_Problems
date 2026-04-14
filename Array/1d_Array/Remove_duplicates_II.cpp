#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int removeDup(vector<int>& arr) {
        //Write your code here...
        int i = 2;
        int n = arr.size();
        for(int j =2 ; j< n ; j++){
            if(arr[i-2]!= arr[j]){
                arr[i] = arr[j];
                i++;
            }
        }
        return i;
        
        
        
    }
};