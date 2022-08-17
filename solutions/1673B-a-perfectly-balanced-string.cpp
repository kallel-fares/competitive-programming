/*
 * Codeforces 1673B - A Perfectly Balanced String?
 * Rating: 1100 | Tags: brute force, greedy, strings
 * Problem:    https://codeforces.com/problemset/problem/1673/B
 * Submission: https://codeforces.com/contest/1673/submission/168693328
 * Solved: 2022-08-17 (VIRTUAL)
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
        string ch;
        cin>>ch;
        
        int n=(int)ch.size();
        
        vector<int> freq(30);
        
        int cnt=0,v=0;
        string rep="";
        for(int i=0;i<n;i++)
        {
            if(freq[ch[i]-'a'])
                break;
            freq[ch[i]-'a']++;
            rep+=ch[i];
        }
        
        for(int i=0;i<n;i++)
        {
            if(ch[i]!=rep[i%rep.size()])
                v=1;
        }
        
        if(v)
        {
            cout<<"NO\n";
        }
        else
            cout<<"YES\n";
        
        
        
    }
    
    
}
