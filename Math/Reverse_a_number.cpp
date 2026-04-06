#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   int x=0;
   int last_digit;
   
   while(n!=0)
   {
       last_digit=n%10;
       x = x*10+last_digit;
       n/=10;
   }
   cout<<x<<endl;
    return 0;
}