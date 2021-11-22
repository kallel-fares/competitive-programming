/*
 * Codeforces 1612B - Special Permutation
 * Rating: 900 | Tags: constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1612/B
 * Submission: https://codeforces.com/contest/1612/submission/136453636
 * Solved: 2021-11-22 (CONTESTANT)
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
 

bool notcorr(vector<int>& ans ,int a,int b,int n)
{
    int mini=1000,maxi=0;
    for(int i=0;i<n/2;i++)
    {
        mini=min(ans[i],mini);
        
    }
    
    for(int i=n/2;i<n;i++)
    {
        
        maxi=max(ans[i],maxi);
    }
    
    if(mini!=a || maxi!=b)
        return true;
    else
        return false;
}
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    testc
    {
        int n,a,b;
        
        cin>>n>>a>>b;
        
        vector<int> ans;
        map<int, int> freq;
        int j=0;
        
        for(int i=n;i>=b+1;i--)
        {
            if(j+1>=n/2)
                break;
            ans.pb(i);
            freq[i]=1;
            j++;
            //cout<<"aw";
            
            
        }
        //cout<<j<<" ";
        
        int aux=a;
        while(j<n/2)
        {
            
            ans.pb(a);
            freq[a]=1;
            a++;
            j++;
            
            
        }
        
        
        
        for(int i=1;i<=n;i++)
        {
            if(!freq[i])
            {
                ans.pb(i);
            }
        }
        
        
        
        if(notcorr(ans,aux,b,n) || ans.size()>n)
        {
            cout<<"-1";
        }
        else
        {
            for(auto x:ans)
            {
                cout<<x<<" ";
            }
        }
        
        
        
        
        
        cout<<"\n";
        
    }
    
    
    
    
}
