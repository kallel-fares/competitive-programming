/*
 * Codeforces 1592A - Gamer Hemose
 * Rating: 800 | Tags: binary search, greedy, math, sortings
 * Problem:    https://codeforces.com/problemset/problem/1592/A
 * Submission: https://codeforces.com/contest/1592/submission/138106898
 * Solved: 2021-12-05 (VIRTUAL)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
//#include "/users/kallelfares/bits/stdc++.h"
using namespace std;


int iscor(vector<int> checked,vector<int> ind,int n)
{
    
    
    int ans=checked[1];
    
    if(n==1)
        return ans;
        
    int toler=0;
    for(int i=2;i<=n;i++)
    {
        if(checked[i])
        {
            
            ans++;
            toler++;
        }
        else
        {
            if((!checked[i-1] && ind[i]>ind[i-1]+1+toler) || checked[i-1])
            {
                ans=-1;
                break;
            }
            else
                ans++;
        }
        
        
    }
    
    return ans;
}

const int m=1e9+7;
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    testc
    {
        int n,h;
        cin>>n>>h;
        
        vector<int> vec(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        
        
        sort(vec.begin(), vec.end(),greater<int>());
        int ans=(h/(vec[0]+vec[1]))*2;
        
        h-=(ans/2)*(vec[0]+vec[1]);
        
        if(!h)
        {
            cout<<ans<<"\n";
            continue;
            
        }
        
        h-=vec[0];
        if(h<=0)
        {
            cout<<ans+1<<"\n";
            continue;
            
        }
        
        cout<<ans+2<<"\n";
            
        
        
        
        
        
    }
    
    
    
}
