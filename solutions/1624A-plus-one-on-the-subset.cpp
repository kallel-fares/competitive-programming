/*
 * Codeforces 1624A - Plus One on the Subset
 * Rating: 800 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1624/A
 * Submission: https://codeforces.com/contest/1624/submission/142192658
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
        
        int n;
        cin>>n;
        
        int maxi=0,mini=1e9;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            maxi=max(a,maxi);
            mini=min(a,mini);
        }
        
        cout<<maxi-mini<<"\n";
    }
    
}
