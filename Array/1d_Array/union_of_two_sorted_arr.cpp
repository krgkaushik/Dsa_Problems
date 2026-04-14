#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> unionOfTwoSortedArrays(vector<int> a, vector<int> b){
        //Write your code here
        set<int>s;
        for(auto v : a){
            s.insert(v);
        }
        for(auto v: b){
            s.insert(v);
        }
        vector<int>ans(s.begin(),s.end());
        return ans;
        
        
    }
};