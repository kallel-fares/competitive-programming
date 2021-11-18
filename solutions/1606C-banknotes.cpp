/*
 * Codeforces 1606C - Banknotes
 * Rating: 1400 | Tags: greedy, number theory
 * Problem:    https://codeforces.com/problemset/problem/1606/C
 * Submission: https://codeforces.com/contest/1606/submission/136020851
 * Solved: 2021-11-18 (PRACTICE)
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
 
ll pewpew(int a)
    {
        ll ans=0;
        for(int i=0;i<=a;i++)
        {
            ans=ans*10+9;
        }
        return ans;
    }

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    

    
    
    //cout<<pewpew(1);
    testc
    {
        
        ll n,k;
        cin>>n>>k;
        
        vector<int> vec(n);
        k++;
        ll ans=0,cpt=1;
        
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            
        }
        for(int i=1;i<n;i++)
        {
            vec[i-1]=vec[i]-vec[i-1];
            
            
        }
        
            
        vec[n-1]=10;
        
        //for(auto x:vec)
         //   cout<<x<<" ";
       int ten=1;
        for(int i=0;i<n;i++)
        {
            cpt=pewpew(vec[i]-1);
            //cout<<k<<" "<<cpt<<" ";
            ans+=min(k,cpt)*ten;
            k-=min(k,cpt);
            ten*=pow(10,vec[i]);
        }
            
                
        cout<<ans<<"\n";
        
        
    }
    
    
}
