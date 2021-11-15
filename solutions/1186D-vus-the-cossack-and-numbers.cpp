/*
 * Codeforces 1186D - Vus the Cossack and Numbers
 * Rating: 1500 | Tags: constructive algorithms, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1186/D
 * Submission: https://codeforces.com/contest/1186/submission/135744091
 * Solved: 2021-11-15 (PRACTICE)
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
 
int dist(char c, char r)
{
    return min(abs(c-r),26-abs(c-r));
}


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<combine("SETT", "TEST");
    
    int n;
    cin>>n;
    vector<vector<int>> neg,pos;
    vector<int> nul;
    
    ll sum=0;
    
    for(int i=0;i<n;i++)
    {
        float a;
        cin>>a;
        sum+=(int)a;
        if((int)a==a)
        {
            nul.pb((int)a);
            continue;
        }
        if(a<0)
            neg.pb({(int)a,0,i});
        else if(a>0)
            pos.pb({(int)a,0,i});
        
            
        
        
    }
    
    
    //cout<<neg.size()<<" "<<pos.size()<<" "<<sum;
    if(sum>0)
    {
        for(int i=0;i<neg.size();i++){
            if(sum!=0)
            {
                neg[i][1]=-1;
                sum--;
            }
        }
    }
    else
    {
        for(int i=0;i<pos.size();i++){
            if(sum!=0)
            {
                pos[i][1]=1;
                sum++;
            }
        }
    }
    
    
    neg.pb({0,0,-1});pos.pb({0,0,-1});
    
    int i=0,j=0,k=0,d=0;
    
    while(k<n)
    {
        if(k==pos[i][2])
        {
            cout<<pos[i][0]+pos[i][1]<<"\n";
            i++;
        }
        else if(k==neg[j][2])
        {
            cout<<neg[j][0]+neg[j][1]<<"\n";
            j++;
        }
        else
        {
            cout<<nul[d]<<"\n";
            d++;
        }
        k++;
    }
    
        
        
    
    
}
