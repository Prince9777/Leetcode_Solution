//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
typedef long long ll;
class Solution{
public:
    int del[5]={1,3,5,7,9};
    ll hello(ll n){
        if(n<5)return del[n];
        return hello(n/5 -1)*10 + del[n%5];
    }
    long long findNumber(long long n){
        return hello(n-1);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.findNumber(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends