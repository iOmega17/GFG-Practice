//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
    
        int sum=0;

        int left_sum=0;

        

        if(n == 1)

        {

            return 1;

        }

        for(int i=0;i<n;i++)

        {

            sum+=arr[i];

        }

        

        int i=0;

        while(left_sum < sum)

        {

            sum-=arr[i];

            if(left_sum == sum)

            {

                return i+1;

            }

            else

            {

                left_sum+=arr[i];

            }

            i++;

        }

        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends