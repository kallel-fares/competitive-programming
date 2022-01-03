/*
 * Codeforces 1621A - Stable Arrangement of Rooks
 * Rating: 800 | Tags: constructive algorithms
 * Problem:    https://codeforces.com/problemset/problem/1621/A
 * Submission: https://codeforces.com/contest/1621/submission/141505695
 * Solved: 2022-01-03 (CONTESTANT)
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
 
 
 
 
 
 
 
 
 
 
/*
 110 111
 
*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    testc
    {
        int n,k;
        cin>>n>>k;
        
        if(k*2>n+n%2)
        {
            cout<<"-1\n";
            continue;
        }
        
        //int v=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j && k && i%2==0)
                {
                    cout<<"R";
                    k--;
                }
                else
                    cout<<".";
            }
            cout<<"\n";
        }
        
    }
    
    
}
