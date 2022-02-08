/*
 * Codeforces 1552D - Array Differentiation
 * Rating: 1800 | Tags: bitmasks, brute force, constructive algorithms, dfs and similar, dp, graphs, math
 * Problem:    https://codeforces.com/problemset/problem/1552/D
 * Submission: https://codeforces.com/contest/1552/submission/145693455
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
 
int rec(vector<int> & vec , int i, map<int, int> & mark, int sum)
{
    if(i==vec.size() )
    {
        if(mark[sum])
            return 1;
        else
            return 0;
    }
    
    
    
    return max( rec(vec,i+1,mark,abs(sum-vec[i])) , rec(vec,i+1,mark,sum+vec[i]) );
    
    
    
}
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
    
    testc
    {
        int n,v=0;
        
        cin>>n;
        vector<int> vec(n);
        
        map<int, int> mark;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vec[i]=abs(a);
            mark[abs(a)]++;
            if(mark[abs(a)]>=2 || !a)
            {
                v=1;
            }
        }
        
        
        for(int i=(1<<n)-1;i>=1;i--)
        {
            vector<int> aux;
            mark.clear();
            for(int j=0;(1<<j)<i;j++)
            {
                if((1<<j)&i)
                {
                    aux.pb(vec[j]);
                }
                else
                    mark[vec[j]]++;
            }
            
            
            if(aux.size()<2)
                continue;
            v=max(rec(aux,0,mark,0),v);
            
            
        }
            
        if(v)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
        
        
    }
    
    
}
