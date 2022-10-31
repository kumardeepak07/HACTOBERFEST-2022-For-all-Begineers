//Kadane's Algorithm
#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        
        int res=-1e9,s=0;
        for(int i=0;i<n;i++)
        {
            if(s<0)
            s=arr[i];
            else
            s+=arr[i];
            
            res=max(s,res);
        }
        return res;
        
    }
};

int main()
{
    int t,n;
    
    cin>>t;
    while(t--)
    {
        
        cin>>n; 
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}