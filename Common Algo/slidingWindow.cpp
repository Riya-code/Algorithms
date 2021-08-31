//using one pointer & given window size k
#include <bits/stdc++.h>
using namespace std;
 
// Method to find the maximum for each
// and every contiguous subarray of size k.
void printKMax(int arr[], int n, int k)
{
    int j,s=0, max;
 
    for (int i = 0; i <k; i++)
        s+= arr[i];
        max=s;
 
        for (j = k; j < n; j++)
        {
            s+=arr[j]-arr[j-k];
            if(s>max)
            max=s;

        }
        cout << max << " ";
    }

 