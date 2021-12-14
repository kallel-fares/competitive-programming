/*
 * Codeforces 1618C - Paint the Array
 * Rating: 1100 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1618/C
 * Submission: https://codeforces.com/contest/1618/submission/139265951
 * Solved: 2021-12-14 (CONTESTANT)
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


const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};



void dfs(int i,int val,vector<vector<int>>& vec, vector<int>& check)
{
    check[i]=val;
    
    for(auto x:vec[i])
    {
        if(check[x]!=val)
            dfs(x,val,vec,check);
    }
}

const int m=1e9+7;


queue<int> q;




int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    testc{
        
        
        ll n;
        cin>>n;
        
        
        vector<ll> vec(n);
        
        
        ll gc_even=0,gc_odd=0;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            vec[i]=a;
            if(i&1)
            {
                gc_odd=__gcd(gc_odd,a);
            }
            else
            {
                gc_even=__gcd(gc_even,a);
                
            }
        }
        
        
        
        int v=1;
        for(int i=0;i<n;i++)
        {
            if(i&1 && vec[i]%gc_even==0)
            {
                gc_even=1;
                continue;
            }
            
            if(i%2==0 && vec[i]%gc_odd==0)
            {
                gc_odd=1;
                continue;
                
            }
        }
        
        if(gc_even!=1 || gc_odd!=1)
        {
            if(gc_even!=1)
                cout<<gc_even<<"\n";
            else
                cout<<gc_odd<<"\n";
        }
        else
        {
            cout<<"0\n";
        }
        
    }
    


}
