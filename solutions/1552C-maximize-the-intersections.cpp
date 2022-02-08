/*
 * Codeforces 1552C - Maximize the Intersections
 * Rating: 1800 | Tags: combinatorics, constructive algorithms, geometry, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1552/C
 * Submission: https://codeforces.com/contest/1552/submission/145688455
 * Solved: 2022-02-08 (VIRTUAL)
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
        int n,k;
        cin>>n>>k;
        
        
        vector<pair<int, int>> vec;
        
        vector<int> mark(2*n+1),aux;
        
        for(int i=0;i<k;i++)
        {
            int a,b;
            cin>>a>>b;
            vec.pb(make_pair(min(a,b), max(a,b)));
            
            mark[a]=mark[b]=1;
            
            
        }
        
        for(int i=1;i<=2*n;i++)
        {
            if(!mark[i])
                aux.pb(i);
        }
        
        
        for(int i=0;i<aux.size()/2;i++)
        {
            vec.pb(make_pair(min(aux[i], aux[i+aux.size()/2]),max(aux[i], aux[i+aux.size()/2])));
        }
        
        int ans=0;
        for(auto x:vec)
        {
            for(auto y:vec)
            {
                if(y.first>x.first && y.first<x.second && y.second>x.second)
                    ans++;
            }
        }
        
        cout<<ans<<"\n";
        
    }
    
    
}
