/*
 * Codeforces 1173C - Nauuo and Cards
 * Rating: 1800 | Tags: binary search, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1173/C
 * Submission: https://codeforces.com/contest/1173/submission/138220839
 * Solved: 2021-12-06 (PRACTICE)
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


int iscor(set<int> lowel,vector<int> theni,int n)
{
    int ans=-1,i=0;
    while((int)lowel.size())
    {
        theni.pb(*lowel.begin());
        lowel.erase(*lowel.begin());
        
        if(theni[i])
            lowel.insert(theni[i]);
        i++;
        
    }
    
    ans=i;
    //cout<<ans<<"\n";
    for(;i<theni.size()-1;i++)
    {
        if(theni[i]>theni[i+1])
            return -1;
    }
    
    
    return ans;
}

const int m=1e9+7;
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    
    int n;
    cin>>n;
    
    
    vector<int> checked(n+1),ind(n+1),theni;
    
    set<int> lowel;
    
    int v=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        checked[a]++;
        
        
        if(a)
            lowel.insert(a);
        
    }
    
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a!=0)
            ind[a]=i+1;
        
        theni.pb(a);
        
        
         
        
    }
    
    
    /*
    for(auto x:lowel)
        cout<<x<<" ";
    */
    
    
    
    
    int flag=iscor(lowel,theni,n);
    //cout<<flag<<" ";
    if(flag!=-1)
    {
        cout<<flag;
        return 0;
    }
    
    
    
    
    int ret=0;
    
    for(int i=1;i<=n;i++)
    {
        if(!checked[i])
        {
            ret+=max(0,ind[i]-ret-i+1);
        }
        
    }
    
    cout<<ret+n;
    
    
    
    
    
    
    
    
    
    
    
            
        
    
    
    
}
