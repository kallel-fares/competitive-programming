/*
 * Codeforces 1574B - Combinatorics Homework
 * Rating: 1100 | Tags: combinatorics, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1574/B
 * Submission: https://codeforces.com/contest/1574/submission/136053166
 * Solved: 2021-11-18 (VIRTUAL)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
//#include "/users/kallelfares/bits/stdc++.h"
using namespace std;
 


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    

    
    testc
    {
        
        int a,b,c,m;
        vector<int> vec(3);
        cin>>vec[0]>>vec[1]>>vec[2]>>m;
        
        sort(vec.begin(), vec.end());
        
        
        if(m>vec[2]+vec[1]+vec[0]-3 || m<vec[2]-vec[1]-vec[0]-1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        
        
        
        
    }
    
    
}
