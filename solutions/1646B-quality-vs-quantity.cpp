/*
 * Codeforces 1646B - Quality vs Quantity
 * Rating: 800 | Tags: brute force, constructive algorithms, greedy, sortings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1646/B
 * Submission: https://codeforces.com/contest/1646/submission/148334425
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
    
//    int a=2e9;
//    cout<<a<<" ";
    testc
    {
        
        int n;
        cin>>n;
        vector<ll> vec(n);
        ll sumr=0,suml=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        
        sort(vec.begin(), vec.end());
        
        int i=2,j=n-2;
        
        suml+=vec[0]+vec[1];
        sumr+=vec[n-1];
        while(j>i && suml>=sumr)
        {
            suml+=vec[i];
            sumr+=vec[j];
            i++;
            j--;
            
            
        }
        
        if(suml<sumr)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
    
    }
    
    
}
