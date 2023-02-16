/*
 * Codeforces 1793B - Fedya and Array
 * Rating: 1100 | Tags: constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1793/B
 * Submission: https://codeforces.com/contest/1793/submission/193830476
 * Solved: 2023-02-16 (PRACTICE)
 */

/*********dicfore************/
#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define lowpos 1e-4 ++
#define forl(i, b, n) for (int i = b; i < n; i++)
#define testc \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

const int m = 1e9 + 7;

int di[]={-1,0,1,0},dj[]={0,1,0,-1};
string directions="URDL";




ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

//int solve(int i,int j,vector<vector<int>> &mark, vector<string> &vec, int n,int m,int k,int lvl)
//{
//    if(j-1<0 || j+1>=m || vec[i-1][j-1]=='.' || vec[i-1][j+1]=='.')
//    {
//        if(lvl>=k)
//        {
//
//            return 1;
//        }
//        return 0;
//    }
//    else
//    {
//        solve(i-1,j-1,mark,vec,n,m,k,lvl+1)
//    }
//}


//

// int ans;
// pair<int, int> dfs(vector<vector<int>> & tree, int u,string &ch)
//{
////    cout<<u<<" ";
//    int w=0,b=0;
//    if(ch[u-1]=='B')
//        b++;
//    else
//        w++;
//
//    for(auto x:tree[u])
//    {
//        pair<int, int> aux=dfs(tree,x,ch);
//        w+=aux.first;
//        b+=aux.second;
//    }
//
//
//    if(b==w)
//        ans++;
//
//    return make_pair(w, b);
//
//
//
//}


ll pew(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        
        if(b&1)
        {
            ans= ((a%m) * (ans%m))%m;
        }
        a= ((a%m) * (a%m))%m;
        b/=2;
    }
    
    return ans;
    
}







int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #ifndef ONLINE_JUDGE
        freopen("/Users/kallelfares/Problem_Solving/ps/ps/ismail.txt", "r", stdin);
        freopen("/Users/kallelfares/Problem_Solving/ps/ps/output.txt", "w", stdout);
    #endif
    
    
    testc
    {
        ll a,b;
        cin>>a>>b;
        
//        if(!a)
//        {
//            cout<<"1\n";
//            cout<<b<<"\n";
//            continue;
//        }
//        if(!b)
//        {
//            cout<<"1\n";
//            cout<<a<<"\n";
//            continue;
//        }
//        if(abs(a-b)==1)
//        {
//            cout<<"2\n";
//            cout<<a<<" "<<b<<"\n";
//            continue;
//        }
        
        if(a*b>=0)
        {
            cout<<(a-b)*2<<"\n";
            if(a>0)
            {
                for(ll i=b;i<=a;i++)
                {
                    cout<<i<<" ";
                }
                for(ll i=a-1;i>b;i--)
                {
                    cout<<i<<" ";
                }
                cout<<"\n";
                continue;
            }
            
            for(ll i=b;i<=a;i++)
            {
                cout<<i<<" ";
            }
            for(ll i=a-1;i>b;i--)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
            continue;
            
            
        }
        
        cout<<(a+abs(b))*2<<"\n";
        for(ll i=0;i<=a;i++)
        {
            cout<<i<<" ";
        }
        for(ll i=a-1;i>0;i--)
        {
            cout<<i<<" ";
        }
        
        for(ll i=0;i>b;i--)
        {
            cout<<i<<" ";
        }
        for(ll i=b;i<=-1;i++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        
        
    }
    
    
    
}
