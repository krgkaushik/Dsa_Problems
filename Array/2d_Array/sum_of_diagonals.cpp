#include <iostream>
using namespace std;

class solution {
public:
    void sumOfDiagonals(int matrix[][1000], int n) {
      long long primary = 0;
      long long secondary = 0;
      for(int i= 0;i<n ;i++){
          for(int j=0;j<n;j++){
              cin>>matrix[i][j];
          }
      }
      for(int i=0;i<n;i++){
        
        primary += matrix[i][i];
      }
      for(int i=0;i<n;i++){
         secondary += matrix[i][n-1-i];
      }
      
      cout<<primary<<" "<<secondary;
        
    }
};