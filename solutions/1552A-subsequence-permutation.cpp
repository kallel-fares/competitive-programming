/*
 * Codeforces 1552A - Subsequence Permutation
 * Rating: 800 | Tags: sortings, strings
 * Problem:    https://codeforces.com/problemset/problem/1552/A
 * Submission: https://codeforces.com/contest/1552/submission/140252339
 * Solved: 2021-12-22 (VIRTUAL)
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
    
    testc{
        int n;
        cin>>n;
        
        string ch;
        cin>>ch;
        
        string aux=ch;
        sort(ch.begin(), ch.end());
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(ch[i]!=aux[i])
                ans++;
        }
        cout<<ans<<"\n";
        
        
    }
}
