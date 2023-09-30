//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &a,int n)
    {
        sort(a.rbegin(),a.rend());
        long sm = 0, sm1 = 0;
        for (auto i : a) sm += i;
        for (int i = 0; i < n; i++) {
            sm1 += a[i];
            if (2*sm1 > sm) return i+1;
        }
        return n;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends