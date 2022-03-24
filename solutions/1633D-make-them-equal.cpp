/*
 * Codeforces 1633D - Make Them Equal
 * Rating: 1600 | Tags: dp, greedy
 * Problem:    https://codeforces.com/problemset/problem/1633/D
 * Submission: https://codeforces.com/contest/1633/submission/150834458
 * Solved: 2022-03-25 (PRACTICE)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-4
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>

using namespace std;
 


//const int m=1e9+7;


ll gcd(ll a, ll b){
    if (b == 0)
       return a;
    return gcd(b, a % b);
}


ll pop(const ll n)
{
    ll ans=0;
    for(ll i=0;i<=40;i++)
    {
        if((1LL<<i)&n)
            ans++;
    }
    return ans;
}
 
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> dp(2e3,2e3);
    
    dp[1]=0;
    for(int i=1;i<=1e3;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i+i/j<=1e3)
            {
                dp[i+i/j]=min(dp[i+i/j],dp[i]+1);
            }
        }
        
    }
    
    
//    for(int i=1;i<=1e3;i++)
//    {
//        cout<<dp[i]<<" ";
//    }
    testc
    {
        int n,k;
        cin>>n>>k;
        vector<int> b(n),c(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            b[i]=dp[b[i]];
            //cout<<b[i]<<" ";
        }
        //cout<<"\n";
        
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
            
            //cout<<c[i]<<" ";
        }
        //cout<<"\n";
        
        
        
        
        vector<int> ans (k+1,-1);
        ans[0]=0;
        
        int maxi=0;
        
        for(int j=0;j<n;j++)
        {
            for(int i=k;i>=0;i--)
            {
                if(ans[i]!=-1 && i+b[j]<=k)
                {
                    ans[i+b[j]]=max(ans[i+b[j]],ans[i]+c[j]);
                    maxi=max(ans[i+b[j]],maxi);
                }
            }

        }
        
        

        cout<<maxi<<"\n";
        
        
        
    }
    
    
}
