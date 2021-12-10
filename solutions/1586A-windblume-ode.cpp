/*
 * Codeforces 1586A - Windblume Ode
 * Rating: 800 | Tags: brute force, constructive algorithms, greedy, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1586/A
 * Submission: https://codeforces.com/contest/1586/submission/138647104
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
        int n;
        cin>>n;
        
        
        vector<int> vec(n);
        
        int odd=0,even=0,s=0;
        
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]&1)
                odd++;
            s+=vec[i];
        }
        
        
        if(isprime(s))
        {
            int v=0;
            cout<<n-1<<"\n";
            for(int i=0;i<n;i++)
            {
                if(vec[i]&1 && !v)
                {
                    v=1;
                    continue;
                }
                cout<<i+1<<" ";
            }
        }
        else
        {
            cout<<n<<"\n";
            for(int i=0;i<n;i++)
            {
                
                cout<<i+1<<" ";
            }
            
        }
        cout<<"\n";
    }
    
    
    
    
    
    
}
