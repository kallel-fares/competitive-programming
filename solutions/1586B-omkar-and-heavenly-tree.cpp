/*
 * Codeforces 1586B - Omkar and Heavenly Tree
 * Rating: 1200 | Tags: brute force, constructive algorithms, trees
 * Problem:    https://codeforces.com/problemset/problem/1586/B
 * Submission: https://codeforces.com/contest/1586/submission/138650206
 * Solved: 2021-12-10 (VIRTUAL)
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
        
        int n,m;
        cin>>n>>m;
        vector<int> freq(n+1);
        for(int i=0;i<m;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            freq[b]=1;
        }
        
        int v=0;
        for(int i=1;i<=n;i++)
        {
            if(!freq[i])
            {
                v=i;
                break;
            }
        }
        
        for(int i=1;i<=n;i++)
        {
            if(i!=v)
                cout<<v<<" "<<i<<"\n";
        }
        
        
        
        
    }
    
    
    
    
    
    
}
