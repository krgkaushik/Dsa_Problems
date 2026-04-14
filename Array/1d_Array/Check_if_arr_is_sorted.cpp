#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    bool isSorted(vector<int>& arr){
        int n = arr.size();

        for(int i = 0; i < n - 1; i++){
            if(arr[i] > arr[i + 1]){
                return false;   // not sorted
            }
        }

        return true;  // sorted
    }
};