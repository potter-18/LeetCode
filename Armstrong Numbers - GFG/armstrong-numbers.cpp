//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        vector<int> arr;
        int num = n;
        
        while(num > 0) {
            arr.push_back(num%10);
            num /= 10;
        }
        
        int sum = 0;
        
        for(int i=0; i<arr.size(); i++) {
            
            sum += pow(arr[i],3);
            
        }
        
        if (sum == n) return "Yes";
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends