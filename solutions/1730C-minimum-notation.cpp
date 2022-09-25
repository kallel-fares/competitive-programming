/*
 * Codeforces 1730C - Minimum Notation
 * Rating: 1200 | Tags: data structures, greedy, math, sortings
 * Problem:    https://codeforces.com/problemset/problem/1730/C
 * Submission: https://codeforces.com/contest/1730/submission/173470343
 * Solved: 2022-09-25 (CONTESTANT)
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







int bfs(vector<string>& lab, vector<vector<int>>& marked, int x,int y, int n,int m)
{
//    for(auto x:marked)
//    {
//        for(auto y:x)
//            cout<<y<<" ";
//        cout<<"\n";
//    }
//    cout<<"\n";
    if(lab[x][y]=='B')
        return 1;
    
    marked[x][y]=1;
    int cnt=0;
    for(int i=0;i<4;i++)
    {
        int xx=di[i]+x,yx=dj[i]+y;
//        cout<<x<<" "<<y<<"\n\n";
        if(xx<0 || yx<0 || xx>=n || yx>=m || marked[xx][yx] || lab[xx][yx]=='#')
            continue;
        cnt+=bfs(lab,marked,xx,yx,n,m);
    }
    
    return min(1,cnt);
        
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
    
    
    double const small=1e-6;
    
    testc
    {
        string ch;
        cin>>ch;
        
        int n=(int)ch.size();
        
        vector<int> fre(10),ans(10);
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=ch[i]-'0'+1;j<10;j++)
            {
                if(fre[j])
                {
                    ans[min(j+1,9)]+=fre[j];
                    fre[j]=0;
                }
            }
            fre[ch[i]-'0']++;
        }
        
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<ans[i]+fre[i];j++)
                cout<<i;
        }
        cout<<"\n";
        
        
        
    }
    
    
}
