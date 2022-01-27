/*
 * Codeforces 1631B - Fun with Even Subarrays
 * Rating: 1100 | Tags: dp, greedy
 * Problem:    https://codeforces.com/problemset/problem/1631/B
 * Submission: https://codeforces.com/contest/1631/submission/144199284
 * Solved: 2022-01-27 (CONTESTANT)
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

 
 
 
/*
 
 
 
 2 1 3
 
 
 
*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
        
        
        
        
        
    testc
    {
        int n;
        cin>>n;
        
        vector<ll> vec(n);
        for (int i=0; i<n; i++) {
            
            cin>>vec[i];
            
        }
        
        int count=0;
        for (int i=0; i<n; i++) {
            
            if(vec[i]==vec[n-1])
                count++;
        }
        
        int i=n-1,cur=0,ans=0;
        
        while(count!=n)
        {
            ans++;
            
            while(vec[i]==vec[n-1] && i>=0)
            {
                i--;
            }
            cur=n-i-1;
            //int aux=cur;
            
            while(cur && i>=0)
            {
                if(vec[i]!=vec[n-1])
                {
                    count++;
                }
                i--;
                cur--;
            }
            //cout<<count<<" ";
        }
        
        
        cout<<ans<<"\n";
        
        
        
    }
        
        
     
}
