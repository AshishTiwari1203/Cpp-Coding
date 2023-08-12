//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n)
    {
        // Min_heap Priority Queue
        priority_queue<long long, vector<long long>, greater<long long>> r;
        // Pushing Elements into the heap
        for (long long i = 0; i < n; i++)
        {
            r.push(arr[i]);
        }
        long long cost = 0;
        while (r.size() > 1)
        {
            long long a = r.top();
            r.pop();
            long long b = r.top();
            r.pop();
            long long sum = a + b;

            cost += sum;
            r.push(sum);
        }

        return cost;
    }
};