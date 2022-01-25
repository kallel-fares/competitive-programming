/*
 * Codeforces 1542B - Plus and Multiply
 * Rating: 1500 | Tags: constructive algorithms, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1542/B
 * Submission: https://codeforces.com/contest/1542/submission/143956371
 * Solved: 2022-01-25 (PRACTICE)
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
        
        ll n,a,b;
        cin>>n>>a>>b;
        
        
        ll aux=1;
        
        int v=0;
        
        
        
        while( aux<=n)
        {
            //cout<<aux<<" ";
            if((n-aux)%b==0 )
            {
                v=1;
            }
            if(a==1)
                break;
            aux*=a;
        }
        
        if(v)
            cout<<"Yes\n";
        else
            cout<<"No\n";
        
        
    }
        
        
     
}
