/*
 * Codeforces 1608B - Build the Permutation
 * Rating: 1200 | Tags: constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1608/B
 * Submission: https://codeforces.com/contest/1608/submission/138762653
 * Solved: 2021-12-11 (CONTESTANT)
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


queue<int> q;




int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    
    
    testc
    {
        int d,n,m;
        cin>>d>>n>>m;
        
        
        
        if(abs(n-m)>1)
        {
            cout<<"-1\n";
            continue;
        }
        
        string ans="";
        
        if(n==m)
        {
            for(int i=0;i<=n;i++)
                ans+="10";
            
        }
        else
        {
            
            while(abs(n-m)>1)
            {
                if(n>m)
                {
                    ans+="010";
                    n--;
                }
                else
                {
                    ans+="101";
                    m--;
                }
                
            }
            if(n>m)
            {
                ans+="0";
                while(n)
                {
                    n--;
                    ans+="10";
                }
                
            }
            else
            {
                ans+="1";
                int aux=m;
                while(m)
                {
                    m--;
                    ans+="01";
                }
                if(n==aux)
                    ans+='0';
            }
        }
        
        if(ans.size()>d )
        {
            cout<<"-1\n";
            continue;
            
        }
        
        
        while(ans.size()!=d)
        {
            ans+=ans[(int)ans.size()-1];
        }
        
        
        vector<int> answ(d);
        
        //cout<<ans<<" ";
        int i=1,j=d;
        for(int l=d-1;l>=0;l--)
        {
            //cout<<"d";
            if(ans[l]=='1')
            {
                //cout<<"dasd";
                answ[l]=j;
                j--;
            }
            
                
            
        }
        i=j;
        for(int l=0;l<d;l++)
        {
            if(ans[l]=='0')
            {
                answ[l]=i;
                i--;
            }
            
                
            
        }
        
        int l=n-1;
        while(n>=0)
        {
            if(ans[l]=='1')
                l--;
            else
                break;
        }
        
        sort(ans.begin()+l, ans.end());
        
        
        for(auto x:answ)
            cout<<x<<" ";
        cout<<"\n";
        
        
        
        
        
        
    }
    
    
    
    
    
}
