/*
 * Codeforces 1619B - Squares and Cubes
 * Rating: 800 | Tags: implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1619/B
 * Submission: https://codeforces.com/contest/1619/submission/140031393
 * Solved: 2021-12-20 (CONTESTANT)
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
        
        int n;
        cin>>n;
        
        
        int ans=1;
        for(int i=2;i*i<=n;i++)
        {
            ans++;
        }
        
        for(int i=2;i*i*i<=n;i++)
        {
            if((int)sqrt(i)!=(int)ceil(sqrt(i)))
                ans++;
        }
        
        cout<<ans<<"\n";
    }
    


}
