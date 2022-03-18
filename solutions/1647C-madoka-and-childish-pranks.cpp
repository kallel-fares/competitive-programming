/*
 * Codeforces 1647C - Madoka and Childish Pranks
 * Rating: 1300 | Tags: constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1647/C
 * Submission: https://codeforces.com/contest/1647/submission/150038416
 * Solved: 2022-03-18 (VIRTUAL)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-4
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>

using namespace std;
 


const int m=1e9+7;


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
    
    
    testc
    {
        
        vector<string>vec;
        int n,m;
        cin>>n>>m;
        
        vector<pair<pair<int, int>, pair<int, int>>> ans;
        
        for(int i=0;i<n;i++)
        {
            string ch;
            cin>>ch;
            vec.pb(ch);
            
            
        }
        if(vec[0][0]=='1')
        {
            cout<<"-1\n";
            continue;
        }
        
        for(int j=m-1;j>=1;j--)
        {
            for(int i=0;i<n;i++)
            {
                if(vec[i][j]=='1')
                {
                    ans.pb(make_pair(make_pair(i+1, j), make_pair(i+1, j+1)));
                }
            }
                
        }
        
        
        for(int i=n-1;i>=1;i--)
        {
            
            if(vec[i][0]=='1')
            {
                ans.pb(make_pair(make_pair(i, 1), make_pair(i+1, 1)));
            }
        }
        
        cout<<ans.size()<<"\n";
        for(auto x:ans)
            cout<<x.first.first<<" "<<x.first.second<<" "<<x.second.first<<" "<<x.second.second<<"\n";
        
    }
    
}
