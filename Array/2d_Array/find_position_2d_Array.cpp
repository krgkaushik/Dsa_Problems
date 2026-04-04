#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void searchElement(int **arr, int n, int m, int k)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == k)
                {
                    cout << i << " " << j;
                    return;
                }
            }
        }
        cout << -1 << " " << -1 << "\n";
    }
};