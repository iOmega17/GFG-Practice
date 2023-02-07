//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int k) {
        int s = 0;
        int e = n-1;
        sort(arr,arr+n);
            if(k>arr[n-1])
                return {arr[e],-1};
             if(k<arr[s])
                return {-1,arr[s]};
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==k)
        {
            return {arr[mid],arr[mid]};
        }
        if(arr[mid]>k)
            e = mid-1;
        else
            s = mid+1;
    }
    return {arr[s-1],arr[s]};

    
}