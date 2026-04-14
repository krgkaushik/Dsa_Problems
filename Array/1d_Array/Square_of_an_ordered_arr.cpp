#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> getSortedSquares(vector<int>& arr) {
        //Write your code here...
        int n = arr.size();
        for(int i =0;i<n;i++){
            arr[i] = arr[i]*arr[i];
        }
        sort(arr.begin(),arr.end);
        
    }
};