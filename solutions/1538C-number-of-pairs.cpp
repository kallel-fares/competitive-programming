/*
 * Codeforces 1538C - Number of Pairs
 * Rating: 1300 | Tags: binary search, data structures, math, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1538/C
 * Submission: https://codeforces.com/contest/1538/submission/140004065
 * Solved: 2021-12-20 (VIRTUAL)
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



const int m=1e9+7;



queue<int> q;




int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    testc{
       
        ll n,l,r;
        cin>>n>>l>>r;
        
        
        
        
        vector<int> vec(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        
        sort(vec.begin(), vec.end());
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ll indl=lower_bound(vec.begin()+i+1, vec.end(), l-vec[i])-vec.begin();
            
            
            
            ll indu=upper_bound(vec.begin()+i+1, vec.end(), r-vec[i])-vec.begin();
            //indu=min(n-1,indu);
            ans+=max(indu-indl,0LL);
            
            
            //cout<<indl<<"||"<<indu<<" ";
            //cout<<max(indu-indl+1,0LL)<<" ";
            
            /*5 5 8
            1 2 3 4 5
            
            2+3+2
             */
        }
        cout<<ans<<"\n";
        
    }
    


}
