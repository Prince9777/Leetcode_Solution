//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
public:
    int isPossible(int n, int m, string s) {
        int minx = 0, maxx = 0, miny = 0, maxy = 0;
        int dx = 0, dy = 0;
        
        for (char d : s) {
            if (d == 'L') {
                dx--;
            }
            if (d == 'R') {
                dx++;
            }
            if (d == 'U') {
                dy++;
            }
            if (d == 'D') {
                dy--;
            }
            
            minx = min(minx, dx);
            maxx = max(maxx, dx);
            miny = min(miny, dy);
            maxy = max(maxy, dy);
        }
        
        return int(maxx - minx < m && maxy - miny < n);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.isPossible(n, m, s)<<endl;
    }
    return 0;
}
// } Driver Code Ends