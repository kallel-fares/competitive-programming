/*
 * Codeforces 1657C - Bracket Sequence Deletion
 * Rating: 1200 | Tags: greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1657/C
 * Submission: https://codeforces.com/contest/1657/submission/150707148
 * Solved: 2022-03-24 (VIRTUAL)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-4
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>

using namespace std;
 


//const int m=1e9+7;


ll gcd(ll a, ll b){
    if (b == 0)
       return a;
    return gcd(b, a % b);
}


ll pop(const ll n)
{
    ll ans=0;
    for(ll i=0;i<=40;i++)
    {
        if((1LL<<i)&n)
            ans++;
    }
    return ans;
}
 
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    testc
    {
        int n;
        cin>>n;
        string ch;
        cin>>ch;


        int cnt=0,i=0,pos=-1;
        //cout<<ch<<" ";
        while (i<n-1)
        {
            if(ch[i]=='(')
            {
                cnt++;
                i+=2;
                pos=i-1;
            }

            if(ch[i]==')')
            {
                if(ch[i+1]==')')
                {
                    cnt++;
                    i+=2;
                    pos=i-1;
                }
                else
                {
                    i++;
                    while(ch[i]=='(')
                    {
                        i++;
                    }
                    if(ch[i]==')')
                    {
                        //cout<<"hi";
                        cnt++;
                        pos=i;
                        //cout<<i<<" ";
                        i++;
                    }

                }
            }


        }
        cout<<cnt<<" "<<n-(pos+1)<<"\n";
        
        
    }
    
    
}
