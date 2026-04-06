#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int evenlyDivides(int N) {
        // Write your code here...
        vector<int> k;
        int n1 =N;
        int nCount=0;
        while(N!=0){
            int last = N%10;
            k.push_back(last);
            N/=10;
        }
        
        for(int i : k){
            if(n1%i == 0){
            nCount++;
                
            }
        }
        return nCount;
        
        
        
    }
};