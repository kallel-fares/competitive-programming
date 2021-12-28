/*
 * Codeforces 1623A - Robot Cleaner
 * Rating: 800 | Tags: brute force, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1623/A
 * Submission: https://codeforces.com/contest/1623/submission/140911045
 * Solved: 2021-12-28 (CONTESTANT)
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
    
    
    
    
    testc
    {
        int n,m,rb,cb,rd,cd;
        cin>>n>>m>>rb>>cb>>rd>>cd;
        
        
        int rdis=rd-rb,cdis=cd-cb;
        if(rdis>=0 && cdis>=0)
        {
            cout<<min(rdis,cdis)<<"\n";
            continue;
        }
        if(rdis>=0)
        {
            cout<<min(rdis,abs(cd-m)+abs(cb-m))<<"\n";
            //cout<<rdis<<"\n";
            continue;
        }
        if(cdis>=0)
        {
            cout<<min(abs(rd-n)+abs(rb-n),cdis)<<"\n";
            //cout<<cdis<<"\n";
            continue;
        }
        
        cout<<min(abs(rd-n)+abs(rb-n),abs(cd-m)+abs(cb-m))<<"\n";
        
    }
    
    
}
