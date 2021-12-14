/*
 * Codeforces 1618A - Polycarp and Sums of Subsequences
 * Rating: 800 | Tags: math, sortings
 * Problem:    https://codeforces.com/problemset/problem/1618/A
 * Submission: https://codeforces.com/contest/1618/submission/139228277
 * Solved: 2021-12-14 (CONTESTANT)
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



void dfs(int i,int val,vector<vector<int>>& vec, vector<int>& check)
{
    check[i]=val;
    
    for(auto x:vec[i])
    {
        if(check[x]!=val)
            dfs(x,val,vec,check);
    }
}

const int m=1e9+7;


queue<int> q;




int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    testc{
        
        vector<int> vec(9);
        
        for(int i=1;i<=7;i++)
            cin>>vec[i];
        
        cout<<vec[1]<<" "<<vec[2]<<" "<<vec[7]-vec[2]-vec[1]<<"\n";
        
    }
    


}
