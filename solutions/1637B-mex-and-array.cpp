/*
 * Codeforces 1637B - MEX and Array
 * Rating: 1100 | Tags: brute force, dp, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1637/B
 * Submission: https://codeforces.com/contest/1637/submission/146122208
 * Solved: 2022-02-12 (CONTESTANT)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-4
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
//#include "/users/kallelfares/bits/stdc++.h"
using namespace std;
 
 
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
 
const int m=1e9+7;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
    
    testc
    {
        int n;
        cin>>n;
        
        
        vector<int> vec(n);
        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        int ans=0,aux=0;
        
        for(int i=1;i<=n;i++)
        {
            ans+=(n-i+1)*i;
        }
        ans*=2;
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                for(int k=i;k<=j;k++)
                {
                    if(vec[k])
                    {
                        ans--;
                    }
                }
            }
        }
        cout<<ans<<"\n";
        
    }
    
    
    
}
