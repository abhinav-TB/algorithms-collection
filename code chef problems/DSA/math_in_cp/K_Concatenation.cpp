#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll kadane(int arr[], int n)
{
    ll currSum = 0, maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0)
            currSum = 0;
    }
    return maxSum;
}

ll maxSubarraySum(int arr[], int n, int k)
{
    ll kadanes_sum = kadane(arr, n);
    if (k == 1)
        return kadanes_sum;
    ll currPrefixSum = 0, currSuffixSum = 0;
    ll maxPrefixSum = INT_MIN, maxSuffixSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currPrefixSum += arr[i];
        maxPrefixSum = max(maxPrefixSum, currPrefixSum);
    }
    ll totalSum = currPrefixSum;
    for (int i = n - 1; i >= 0; i--)
    {
        currSuffixSum += arr[i];
        maxSuffixSum = max(maxSuffixSum, currSuffixSum);
    }
    ll ans;
    if (totalSum < 0)
        ans = max(maxSuffixSum + maxPrefixSum, kadanes_sum);
    else
        ans = max(maxPrefixSum + maxSuffixSum + (k - 2) * totalSum, kadanes_sum);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << maxSubarraySum(arr, n, k) << endl;
    }

    return 0;
}