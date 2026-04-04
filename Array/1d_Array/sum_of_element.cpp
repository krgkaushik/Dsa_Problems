#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int arraySum(int arr[], int n){
        int total =0;
        for(int i=0;i<n;i++){
             total +=arr[i];
        }
        return total;
        
    }
};