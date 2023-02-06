//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>arr, int n, int k)
    {
        int s = 0;
        int e = n-1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        if(arr[mid]>k)
            e = mid-1;
        else
            s = mid+1;
    }
    return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends