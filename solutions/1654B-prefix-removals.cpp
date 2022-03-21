/*
 * Codeforces 1654B - Prefix Removals
 * Rating: 800 | Tags: strings
 * Problem:    https://codeforces.com/problemset/problem/1654/B
 * Submission: https://codeforces.com/contest/1654/submission/150338472
 * Solved: 2022-03-21 (VIRTUAL)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-4
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>

using namespace std;
 


const int m=1e9+7;


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
        string ch;
        cin>>ch;
        
        int n=(int)ch.size();
        vector<int>vec(100);
        for(int i=0;i<n;i++)
        {
            vec[ch[i]-'a']++;
        }
        
        int pos=0;
        for(int i=0;i<n;i++)
        {
            if(vec[ch[i]-'a']==1)
            {
                pos=i;
                break;
            }
            vec[ch[i]-'a']--;
            
        }
        
        string aux=string(ch.begin()+pos,ch.end());
        
        cout<<aux<<"\n";
        
    }
    
    
}
