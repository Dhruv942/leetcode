//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
   int fun(int n,int &x,int &y,int &z,vector<int> &dp){
        if(n==0)
            return 0;
        if(n<0)    
            return INT_MIN;
        
        if(dp[n]!=-1)
            return dp[n];
    
        return dp[n]=1+max({fun(n-x,x,y,z,dp),fun(n-y,x,y,z,dp),fun(n-z,x,y,z,dp)});
        
    }   
    
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
                vector<int> dp(n+1,-1);
        return max(0,fun(n,x,y,z,dp));

    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends
