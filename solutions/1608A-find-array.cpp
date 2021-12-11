/*
 * Codeforces 1608A - Find Array
 * Rating: 800 | Tags: constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1608/A
 * Submission: https://codeforces.com/contest/1608/submission/138726349
 * Solved: 2021-12-11 (CONTESTANT)
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



bool isprime(int n)
{
    for(int i=2;i<n;i++)
        if(n%i==0)
            return false;
    return true;
}


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    
    testc
    {
        int n;
        cin>>n;
        for(int i=2;i<=n+1;i++)
            cout<<i<<" ";
        cout<<"\n";
    }
    
    
    
    
    
    
}
