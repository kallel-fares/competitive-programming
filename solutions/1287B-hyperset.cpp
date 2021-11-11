/*
 * Codeforces 1287B - Hyperset
 * Rating: 1500 | Tags: brute force, data structures, implementation
 * Problem:    https://codeforces.com/problemset/problem/1287/B
 * Submission: https://codeforces.com/contest/1287/submission/135016435
 * Solved: 2021-11-11 (PRACTICE)
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
 

string combine(string &  ch1, string & ch2)
{
    string ch="";
    
    for(int i=0;i<ch1.size();i++)
    {
        if(ch1[i]==ch2[i])
            ch+=ch1[i];
        else
        {
            if(ch1[i]=='S' && ch2[i]=='E' || ch1[i]=='E' && ch2[i]=='S')
            {
                ch+='T';
            }
            if(ch1[i]=='S' && ch2[i]=='T' || ch1[i]=='T' && ch2[i]=='S')
            {
                ch+='E';
            }
            if(ch1[i]=='T' && ch2[i]=='E' || ch1[i]=='E' && ch2[i]=='T')
            {
                ch+='S';
            }
        }
    }
    return ch;
    
    
}



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<combine("SETT", "TEST");
    
    int n,k;
    cin>>n>>k;
    vector<string> vec;
    map<string, ll> freq;
    for(int i=0;i<n;i++)
    {
        string ch;
        cin>>ch;
        freq[ch]++;
        vec.pb(ch);
    }
    
    
    
    
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll ve=freq[vec[i]];
        //ans+=(ve*(ve-1)*(ve-2))/6;
        for(int j=i+1;j<n;j++)
        {
            //cout<<vec[i]<<" "<<vec[j]<<"\n";
            if(vec[i]!=vec[j])
            {
                //cout<<freq[vec[i]]*freq[vec[j]]*freq[combine(vec[i],vec[j])];
                if(freq[combine(vec[i],vec[j])])
                    ans++;
            }
            
        }
    }
    
    
    
    
    cout<<ans/3;
    
}
