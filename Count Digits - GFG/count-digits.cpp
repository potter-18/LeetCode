//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int num = N;
        int count = 0;
        vector<int> arr;
        
        while(num != 0) {
            arr.push_back(num%10);
            num = num/10;
        }
        
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] != 0 && N%arr[i] == 0) count++;
        }
        
        return count;
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
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends