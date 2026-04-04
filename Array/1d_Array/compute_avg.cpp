#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    double calculateAverage(int arr[], int n)
    {
        double count;
        for (int i = 0; i < n; i++)
        {
            count += arr[i];
        }
        double average;
        average = count / n;
        return average;
    }
};