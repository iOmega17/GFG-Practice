//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
                // Intially check if the given sum is 0 or not
        if(s==0)
        {
            return {-1};
        }
        // 
        long long store_sum = 0 ;
        int start = 0 ;
        // Start the loop from start to end and stop after the addition of t he current sum is greater than the given sum
        for(int i=0;i<n;i++)
        {
            if(store_sum < s && i < n)
            {
                store_sum += arr[i];
            }
        //now check the left side if the sum ios greater then decrease the one position element by one 
        while(store_sum > s)
        {
            store_sum -= arr[start];
            start++;
        }
        // if the given sum and the current sum math return the index of the subarray +1 because we have started with 0 and we have to ret the value in 1 based indexing
        if(store_sum == s)
        {
            return {start+1,i+1};
        }
    }
    return {-1};
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends