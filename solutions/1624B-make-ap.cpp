/*
 * Codeforces 1624B - Make AP
 * Rating: 900 | Tags: implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1624/B
 * Submission: https://codeforces.com/contest/1624/submission/142220693
 * Solved: 2022-01-10 (CONTESTANT)
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
    
    
    testc{
        
        int a,b,c;
        cin>>a>>b>>c;
        
        
        if((((b-a)+b)%c==0 && (b-a)+b>0) || (((b-c)+b)%a==0 && (b-c)+b>0) || ((a+c)%2==0 && ((a+c)/2)%b==0 )  )
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
    }
    
}
