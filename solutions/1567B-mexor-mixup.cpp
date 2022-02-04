/*
 * Codeforces 1567B - MEXor Mixup
 * Rating: 1000 | Tags: bitmasks, greedy
 * Problem:    https://codeforces.com/problemset/problem/1567/B
 * Submission: https://codeforces.com/contest/1567/submission/145170854
 * Solved: 2022-02-04 (VIRTUAL)
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
    
    
    vector<int> prexor(3e5+1);
    
    for(int i=1;i<=3e5+1;i++)
    {
        prexor[i]=prexor[i-1]^i;
    }
    
    testc
    {
        int a,b;
        cin>>a>>b;
        
        if((prexor[a-1]^b)==a)
        {
            cout<<a+2<<"\n";
            continue;
        }
        if(prexor[a-1]==b)
        {
            cout<<a<<"\n";
            continue;
        }
        
        cout<<a+1<<"\n";
        
    }
    
}
/*
 
 0  1  2  3  4  5
 
 
 */
