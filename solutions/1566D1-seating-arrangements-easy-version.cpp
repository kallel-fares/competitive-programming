/*
 * Codeforces 1566D1 - Seating Arrangements (easy version) 
 * Rating: 1100 | Tags: data structures, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1566/D1
 * Submission: https://codeforces.com/contest/1566/submission/136600964
 * Solved: 2021-11-23 (VIRTUAL)
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
        
        int n,m;
        cin>>n>>m;
        
        vector<int> vec(m),svec(m),aux(m);
        for(int i=0;i<m;i++)
        {
            cin>>vec[i];
            svec[i]=vec[i];
            
        }
        
        sort(svec.begin(), svec.end());
            
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                if(vec[i]!=svec[j])
                {
                    ans+=aux[j];
                }
                else
                {
                    if(aux[j]==0)
                    {
                        aux[j]=1;
                        break;
                    }
                    
                }
            }
        }
        cout<<ans<<"\n";
        
        
        
        
        
    }
    
    
    
    
}
