/*
 * Codeforces 1592B - Hemose Shopping
 * Rating: 1200 | Tags: constructive algorithms, dsu, math, sortings
 * Problem:    https://codeforces.com/problemset/problem/1592/B
 * Submission: https://codeforces.com/contest/1592/submission/138107634
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
        int n,x;
        cin>>n>>x;
        
        vector<int> vec(n),sor;
        
        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        sor=vec;
        
        
        sort(sor.begin(), sor.end());
        
        int v=0;
        for(int i=0;i<n;i++)
        {
            if(i-x<0 && i+x>n-1 && vec[i]!=sor[i])
            {
                v=1;
                break;
            }
        }
        
        if(v)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        
        
        
        
        
    }
    
    
    
}
