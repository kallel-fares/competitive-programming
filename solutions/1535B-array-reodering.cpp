/*
 * Codeforces 1535B - Array Reodering
 * Rating: 900 | Tags: brute force, greedy, math, number theory, sortings
 * Problem:    https://codeforces.com/problemset/problem/1535/B
 * Submission: https://codeforces.com/contest/1535/submission/147189965
 * Solved: 2022-02-21 (VIRTUAL)
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
    
    /*
     
     
     */
    
    testc
    {
        int n;
        cin>>n;
        
        vector<int> vec;
        
        int cnt=0,ans=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(!(a&1))
            {
                cnt++;
                ans+=n-cnt;
            }
            else
                vec.pb(a);
        }
        //__gcd(2,43);
        for(int i=0;i<vec.size();i++)
        {
            for(int j=i+1;j<vec.size();j++)
            {
                if(__gcd(vec[i],vec[j])>1)
                    ans++;
            }
        }
        
        cout<<ans<<"\n";
        
        
            
        
        
        
        
        
    }
    
}
