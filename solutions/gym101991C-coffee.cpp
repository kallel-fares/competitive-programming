/*
 * Codeforces gym101991C - Coffee
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/101991/problem/C
 * Submission: https://codeforces.com/gym/101991/submission/109765257
 * Solved: 2021-03-12 (PRACTICE)
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

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("coffee.in","r",stdin);
	testc
	{
		map<string,vector<int>> menu;
		map<string,int> dumb;
		dumb["small"]=0;
		dumb["medium"]=1;
		dumb["large"]=2;
		
		int c,p;
		cin>>c>>p;
		
		int fe=100/p;
		
		for(int i=0;i<c;i++)
		{
			string ch;
			int a,b,c;
			cin>>ch>>a>>b>>c;
			menu[ch].pb(a);
			menu[ch].pb(b);
			menu[ch].pb(c);
		}
		
		
		/*for(auto x:menu)
		{
			for(auto y:x.second)
				cout<<y<<" ";
			cout<<"\n";
		}*/
		
		
		for(int i=0;i<p;i++)
		{
			string ch1,ch2,ch3;
			cin>>ch1>>ch2>>ch3;
			
			int aux=menu[ch3][dumb[ch2]]+fe;
			if(aux%10==4 || aux%10==6)
			{
				aux-=aux%10-5;
			}
			
			if(aux%10==1)
			{
				aux-=aux%10;
			}
			
			if(aux%10==9)
			{
				aux++;
			}
			cout<<ch1<<" "<<aux<<"\n";
			
		}
		cout<<"\n";
		
	
	}


}
