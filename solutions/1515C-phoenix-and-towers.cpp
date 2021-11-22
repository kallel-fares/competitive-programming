/*
 * Codeforces 1515C - Phoenix and Towers
 * Rating: 1400 | Tags: constructive algorithms, data structures, greedy
 * Problem:    https://codeforces.com/problemset/problem/1515/C
 * Submission: https://codeforces.com/contest/1515/submission/136543243
 * Solved: 2021-11-22 (VIRTUAL)
 */

/***********dicfore************/
 
#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
//#include "/users/kallelfares/bits/stdc++.h"
using namespace std;
 

 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    testc
    {
        ll n,m,x;
        
        cin>>n>>m>>x;
        
        vector<pair<int, int>> vec;
        vector<int> ans(n);
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            
            vec.pb(make_pair(a,i));
        }
        
        sort(vec.begin(),vec.end());
        
        
        cout<<"YES\n";
        for(int i=0;i<n;i++)
        {
            ans[vec[i].second]=i%m+1;
            //cout<<<<" ";
        }
        
        for(auto x:ans)
            cout<<x<<" ";
        cout<<"\n";
        
        
        
    }
    
    
    
    
}
