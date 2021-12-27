/*
 * Codeforces 1550B - Maximum Cost Deletion
 * Rating: 1000 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1550/B
 * Submission: https://codeforces.com/contest/1550/submission/140737830
 * Solved: 2021-12-27 (VIRTUAL)
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



/*
 110 111

*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    
    
    testc
    {
        ll n,a,b;
        cin>>n>>a>>b;
        
        string ch;
        cin>>ch;
        
        ll ans=n*a;
        ll cnt=1;
        for(int i=0;i<n-1;i++)
        {
            if(ch[i]!=ch[i+1])
                cnt++;
        }
        
        cout<<ans+max(b*n,(cnt/2+1)*b)<<"\n";
        
    }
    
    
    /*
     101010101
     
     8
     
     2
     
     111 0000 1111 000
     4
     
     3
     
     1 0 1 0 1
     
     5->3
     
     */
    
}
