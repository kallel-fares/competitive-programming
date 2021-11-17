/*
 * Codeforces 1607D - Blue-Red Permutation
 * Rating: 1300 | Tags: greedy, math, sortings
 * Problem:    https://codeforces.com/problemset/problem/1607/D
 * Submission: https://codeforces.com/contest/1607/submission/135997764
 * Solved: 2021-11-17 (PRACTICE)
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
 

    bool cmp(const pair<int, int>& a,const pair<int, int>& b){
            if(a.first==b.first)
                return a.second<b.second;
            return a.first<b.first;
        }
    


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<combine("SETT", "TEST");
    
    

    
    testc
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        vector<pair<int, int>> ps;
        string ch;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        cin>>ch;
        for(int i=0;i<n;i++)
        {
            if(ch[i]=='R')
            {
                ps.pb(make_pair(max(vec[i],1),n));
            }
            else
            {
                ps.pb(make_pair(1,min(vec[i],n)));
            }
        }
        
        
        sort(ps.begin(), ps.end(), cmp);
        
        /*for(auto x:ps)
        {
            cout<<x.first<<" "<<x.second<<"||";
        }*/
        
        int v=0,i=1;
        for(auto x:ps)
        {
            if(x.second<x.first || i<x.first || i>x.second)
                v=1;
            i++;
            
        }
        //cout<<"\n";
        if(v)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        
        
        
        
    }
    
    
}
