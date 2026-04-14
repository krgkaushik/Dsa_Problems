#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    int removeSpecificElement(vector<int>& arr, int target) {
        int j = 0;  // index for placing valid elements

        for(int i = 0; i < arr.size(); i++){
            if(arr[i] != target){
                arr[j] = arr[i];
                j++;
            }
        }

        return j; // new size of array
    }
};