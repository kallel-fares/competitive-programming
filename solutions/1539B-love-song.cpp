/*
 * Codeforces 1539B - Love Song
 * Rating: 800 | Tags: dp, implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1539/B
 * Submission: https://codeforces.com/contest/1539/submission/145066115
 * Solved: 2022-02-03 (VIRTUAL)
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
    
    
    
        
        
    int n,q;
    cin>>n>>q;
    
    string ch;
    cin>>ch;
    
    vector<int> vec(n+1);
    
    for(int i=1;i<=n;i++)
    {
        vec[i]=vec[i-1]+(ch[i-1]-'a')+1;
        //cout<<vec[i]<<" ";
    }
    
    
    
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        
        cout<<vec[b]-vec[a-1]<<"\n";
        
    }
    
    
}
