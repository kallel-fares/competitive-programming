/*
 * Codeforces 1398B - Substring Removal Game
 * Rating: 800 | Tags: games, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1398/B
 * Submission: https://codeforces.com/contest/1398/submission/90573491
 * Solved: 2020-08-21 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	
	testc 	
	{
		string ch;
		int s=0,j=0,tab[101]={0};
		cin>>ch;
		for(int i=0;i<ch.length();i++)
		{
			if(ch[i]=='1')
				s++;
			else
				if(s!=0)
				{
					tab[j]=s;
					s=0;
					j++;
				}
		}
		if(s!=0)
		{
			tab[j]=s;
			j++;
		}
		
		sort(tab,tab+j,greater<int>());
		s=0;
		
		for(int i=0;i<j;i+=2)
			s+=tab[i];
		cout<<s<<"\n";
		
		
	}

}
