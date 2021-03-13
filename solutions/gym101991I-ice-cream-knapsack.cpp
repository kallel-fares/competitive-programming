/*
 * Codeforces gym101991I - Ice-cream Knapsack
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/101991/problem/I
 * Submission: https://codeforces.com/gym/101991/submission/109845442
 * Solved: 2021-03-13 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=3e5+5;

bool comp(pair<int,int>a ,pair<int,int>b)
{
	if(a.first!=b.first) return a.first<b.first ;
	else return a.second > b.second;
}


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("icecream.in","r",stdin);
	testc
	{
		int n,k;
		cin>>n>>k;
		vector<pair<int,int>> vec(n);
		vector<int> aux;
		
		
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>vec[i].first;	
		}
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>vec[i].second;
		}
		
		sort(vec.begin(),vec.end(),comp);
		
		/*for(auto x:vec)
			cout<<x.first<<" "<<x.second<<"\n";*/
		
		
		
		
		
		ll ans=0;
		//cout<<vec[k-1].first<<"\n\n";
		for(int i=0 ; i<n ;i++)
		{
			//cout<<vec[i].first<<" ";
			if(vec[i].first>vec[k-1].first)
				break;
			aux.pb(vec[i].second);
			//cout<<vec[i].second<<" ";
		}
		
		cout<<vec[k-1].first<<" ";
		
		sort(aux.begin(),aux.end(),greater<int>());
		//cout<<k<<"\n";
		for(auto x:aux)
		{
			
			//cout<<x<<" ";
			if(!(k--))
			{
				
				break;	
			}
			ans+=x;
		}
		
		cout<<ans<<"\n";
	
	}


}
