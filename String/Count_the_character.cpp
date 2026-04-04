#include <iostream>
using namespace std;

class solution {
public:
    int countChar(string str, char ch) {
     int count = 0;
        for(char Counting : str){
            if(Counting == ch){
                count++;
            }
        }
            return count;
        
        
        
    }
};