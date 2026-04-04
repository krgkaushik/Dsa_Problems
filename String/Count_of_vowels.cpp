#include <iostream>
using namespace std;

class solution {
public:
    int countVowels(string str) {
        int count =0;
        for(int i = 0; i<str.size();i++){
            int ch = str[i];
            if(ch == 'a'|| ch =='e' || ch == 'i' || ch == 'o' || ch == 'u'||
              ch == 'A'|| ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
             count++;
            }
            
        }
        return count;
        
        
    }
};