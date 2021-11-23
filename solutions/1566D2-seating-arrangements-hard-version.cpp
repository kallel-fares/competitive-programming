/*
 * Codeforces 1566D2 - Seating Arrangements (hard version) 
 * Rating: 1600 | Tags: data structures, greedy, implementation, sortings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1566/D2
 * Submission: https://codeforces.com/contest/1566/submission/136603947
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
        
        int n,m,ans=0;
        cin>>n>>m;
        
        vector<pair<int, int>> vec;
        for(int i=0;i<n*m;i++)
        {
            int a;
            cin>>a;
            vec.pb(make_pair(a, i));
            
        }
        
        sort(vec.begin(), vec.end());
        
        
        /*for(auto x:vec)
        {
            cout<<x.first<<" ";
        }
        cout<<"\n";*/
        
        
        for(int i=0;i<n;i++)
        {
            vector<int> aux;
            sort(vec.begin()+i*m, vec.begin()+(i+1)*m, cmp);
            for(int j=i*m;j<(i+1)*m;j++)
            {
                aux.pb(vec[j].first);
                //cout<<vec[j].first<<" ";
            }
                
            
            ans+=solve(aux,m);
        }
        
        
        //sort(vec.begin(), vec.end(),cmp);
        /*
        for(auto x:vec)
        {
            cout<<x.first<<" ";
        }
        cout<<"\n";*/
        
        cout<<ans<<"\n";
        //cout<<solve(vec,m)<<"\n";
        
        
        
        
        
    }
    
    
    
    
}
