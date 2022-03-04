/*
 * Codeforces 1646A - Square Counting
 * Rating: 800 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1646/A
 * Submission: https://codeforces.com/contest/1646/submission/148304148
 * Solved: 2022-03-04 (CONTESTANT)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-4
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>

ll gcd(ll a, ll b){
    if (b == 0)
       return a;
    return gcd(b, a % b);
}

using namespace std;
 
//
//const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
//
//const int m=1e9+7;
 
// 3 3 3 3
//
 
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<"asd";
    
    testc
    {
        
//        int n;
//        cin>>n;
//        vector<int> vec(n);
//        for(int i=0;i<n;i++)
//            cin>>vec[i];
//
        ll n,s;
        cin>>n>>s;
        
        cout<<s/(n*n)<<"\n";
        
    
    }
    
    
}
