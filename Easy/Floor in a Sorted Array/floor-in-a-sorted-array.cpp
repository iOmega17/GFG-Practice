//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> arr, long long n, long long k){
        
        
        long long  mid;
        long long s = 0;
        long long e = n-1;
        int flor = -1;
        while(s<=e)
        {
            mid = s -(s-e)/2;
            if(arr[mid] == k)
            {
                return mid;
                
            }
            if(arr[mid]<k)
            {
                s = mid+1;
                flor = mid;
            }
            else{
                e = mid-1;
            }
        }
        if(mid ==0)
            return -1;
        return flor;
        
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends