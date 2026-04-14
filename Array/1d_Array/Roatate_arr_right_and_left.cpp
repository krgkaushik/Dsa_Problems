#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> rotateArray(vector<int>& nums, int x, int y) {
        //Write your code here...
        int n = nums.size();
        vector<int>tempx2;
        int tempx3[n];
        int temp[y];
        for(int i=n;i>=x;i--){
            tempx3[i-n] = nums[i];
        }
        for(int i= 0;i<n-x;i++){
            tempx3[i] = nums[i];
        }
        for(int i=0;i<tempx.size();i++){
            tempx2.push_back(tempx[i]);
        }
        for(int i =0; i<y;i++){
            temp[i] = tempx2[i];
        }
        for(int i = y; i<n;i++){
            tempx2(i-y) = tempx2[i];
        }
        for(int i =n-y;i<n;i++){
            tempx2[i] = temp[i-(n-y)];
        }
        
        
        
        
    }
};