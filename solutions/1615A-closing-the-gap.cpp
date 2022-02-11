/*
 * Codeforces 1615A - Closing The Gap
 * Rating: 800 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1615/A
 * Submission: https://codeforces.com/contest/1615/submission/145985832
 * Solved: 2022-02-11 (VIRTUAL)
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
    
    
    
    testc
    {
        int n;
        cin>>n;
        
        ll s=0;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            s+=a;
        }
        
        if(s%n==0)
        {
            cout<<"0";
        }
        else
            cout<<"1";
        cout<<"\n";
        
    }
    
    
}
