/*
 * Codeforces 1594C - Make Them Equal
 * Rating: 1200 | Tags: brute force, greedy, math, strings
 * Problem:    https://codeforces.com/problemset/problem/1594/C
 * Submission: https://codeforces.com/contest/1594/submission/139844325
 * Solved: 2021-12-19 (VIRTUAL)
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

ll pew(ll a,ll b)
{
    a %= m;
        long long res = 1;
        while (b > 0) {
            if (b & 1)
                res = res * a % m;
            a = a * a % m;
            b >>= 1;
        }
        return res;
    
    
}



queue<int> q;




int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    testc{
       
        int n;
        char c;
        
        cin>>n>>c;
        
        string ch;
        
        cin>>ch;
        
        
        int v=0;
        for(int i=0;i<n;i++)
        {
            if(ch[i]!=c)
            {
                v=1;
                break;
            }
        }
        //cout<<c;
        if(!v)
        {
            cout<<"0\n";
            continue;
        }
        v=0;
        
        for(int i=n/2;i<n;i++)
        {
            if(ch[i]==c)
            {
                v=i+1;
            }
        }
        
        if(v)
        {
            cout<<"1\n";
            cout<<v;
        }
        else
        {
            cout<<"2\n";
            cout<<n<<" "<<n-1;
        }
        cout<<"\n";
        
        
    }
    


}
