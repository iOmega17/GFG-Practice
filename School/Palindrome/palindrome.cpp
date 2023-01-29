//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int x)
		{
        if (x < 0) return false;
        long rev{0}, origin{x};
        do {
            rev = rev * 10 + x % 10;
        } while (x /= 10);
        if(rev == origin)
        {
            return "Yes";
        }
        if(rev != origin)
        {
            return "No";
        }
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends