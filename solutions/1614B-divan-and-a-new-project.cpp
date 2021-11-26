/*
 * Codeforces 1614B - Divan and a New Project 
 * Rating: 1000 | Tags: constructive algorithms, sortings
 * Problem:    https://codeforces.com/problemset/problem/1614/B
 * Submission: https://codeforces.com/contest/1614/submission/137010522
 * Solved: 2021-11-26 (CONTESTANT)
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
        
        int n;
        cin>>n;
        
        vector<int> ans(n);
        
        vector<pair<ll, ll>> vec;
        //map<int, int> freq;
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vec.pb(make_pair(a, i));
        }
        
        sort(vec.begin(), vec.end(),greater<pair<int, int>>());
        
        
        ll s=0;
        ll v=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                v=abs(v)+1;
            }
            else{
                v=-v;
            }
            //cout<<v<<" ";
            ans[vec[i].second]=v;
            s+=vec[i].first*abs(v);
            
        }
        cout<<2*s<<"\n";
        cout<<"0 ";
        for(auto x:ans)
            cout<<x<<" ";
        cout<<"\n";
        
        
        
        
        
    }
    
    
        
    
    
    
    
    
}
