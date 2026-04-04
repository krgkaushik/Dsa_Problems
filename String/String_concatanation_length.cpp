#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int lengthAfterConcat(int n, string arr[])
    {
        string concat;
        for (int i = 0; i < n; i++)
        {
            concat += arr[i];
        }

        int final_count = concat.length();
        return final_count;
    }
};