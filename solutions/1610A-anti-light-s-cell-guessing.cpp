/*
 * Codeforces 1610A - Anti Light's Cell Guessing
 * Rating: 900 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1610/A
 * Submission: https://codeforces.com/contest/1610/submission/136634541
 * Solved: 2021-11-23 (CONTESTANT)
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
 
 bool cmp(pair<int, int> a,pair<int, int> b)
{
     return a.second<b.second;
}
 
int solve(vector<int>& vec,int m)
{
    vector<int> svec,aux(m);
    svec=vec;
    
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
    return ans;
    
    
}


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    testc
    {
        int n,m;
        cin>>n>>m;
        
        if(n==m && n==1)
        {
            cout<<"0\n";
            continue;
        }
        if(n==1 || m==1)
        {
            cout<<"1\n";
            continue;
        }
        cout<<"2\n";
    }
    
    
    
    
}
