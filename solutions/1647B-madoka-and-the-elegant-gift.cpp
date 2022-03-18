/*
 * Codeforces 1647B - Madoka and the Elegant Gift
 * Rating: 1200 | Tags: brute force, constructive algorithms, graphs, implementation
 * Problem:    https://codeforces.com/problemset/problem/1647/B
 * Submission: https://codeforces.com/contest/1647/submission/150034791
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
    
    
    testc{
        
        vector<string>vec;
        int n,m;
        cin>>n>>m;
        
        string aux="";
        
        for(int i=0;i<m+2;i++)
            aux+='0';
        
        vec.pb(aux);
        for(int i=0;i<n;i++)
        {
            string ch;
            cin>>ch;
            ch='0'+ch+'0';
            vec.pb(ch);
            
            
        }
        vec.pb(aux);
        
        
        // for(auto x:vec)
        // {
        //     cout<<x<<"\n";
        // }
        
        // for(int i=0;i<=n+1;i++)
        // {
        //     for(int j=0;j<=m+1;j++)
        //     {
        //         cout<<vec[i][j];
        //     }
        //     cout<<"\n";
            
        // }
        
        
        int v=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                int cnt=0;
                if(vec[i][j]=='1')
                    cnt++;
                
                if(vec[i+1][j]=='1')
                    cnt++;
                
                if(vec[i+1][j+1]=='1')
                    cnt++;
                
                if(vec[i][j+1]=='1')
                    cnt++;
                
                if(cnt==3)
                    v=1;
                
            }
            
        }
        
        if(!v)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
        
        
        
    }
    
}
