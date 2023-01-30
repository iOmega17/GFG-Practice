//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        long long int n1 = 0, n2 = 1 ,n3;
        for(int i =1 ; i<n ;i++)
        {
            n3 = (n1+n2)%1000000007; 
            n1 = n2;
            n2 = n3;

        }
        return n3;
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends