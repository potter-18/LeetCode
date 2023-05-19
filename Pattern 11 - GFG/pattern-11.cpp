//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        bool ini = 1;
        bool val;
        for(int i = 0; i < n; i++) {
            val = ini;
            for(int j = 0; j < i+1; j++) {
                cout << val << " ";
                val = !val;
            }
            ini = !ini;
            cout << "\n";
        }
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends