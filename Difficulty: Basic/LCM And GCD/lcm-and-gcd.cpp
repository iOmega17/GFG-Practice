//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long gcd = 1;
        long long prod = A*B;
        while(A>0&&B>0)
        {
            if(A>=B)
                A %= B;
            else
                B %= A;
        }
        if(A>0)
            gcd = A;
        else
            gcd = B;
        long long lcm = prod/gcd;
        return {lcm,gcd};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends