#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void table(int n)
    {
        int result;
        for (int i = 1; i <= 10; i++)
        {
            result = n * i;
            cout << n << " x " << i << " = " << result << endl;
        }
    }
};