/*
 * Codeforces 1191B - Tokitsukaze and Mahjong
 * Rating: 1200 | Tags: brute force, implementation
 * Problem:    https://codeforces.com/problemset/problem/1191/B
 * Submission: https://codeforces.com/contest/1191/submission/100794296
 * Solved: 2020-12-09 (PRACTICE)
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
	
	//string tab[5];
	
	//m p s
	int d[20][5];
	
	for(int i=1;i<=9;i++)
	{
		d[i][0]=0;		
	}
	
	for(int i=1;i<=9;i++)
	{
		d[i][1]=0;		
	}
	for(int i=1;i<=9;i++)
	{
		d[i][2]=0;		
	}
		
	
	string ch;
	cin>>ch;
	d[ch[0]-'0'][(ch[1]-'m')/3]+=1;
	cin>>ch;
	d[ch[0]-'0'][(ch[1]-'m')/3]+=1;
	cin>>ch;
	d[ch[0]-'0'][(ch[1]-'m')/3]+=1;
	
	for(int j=0;j<3;j++)
	{
		for(int i=1;i<=9;i++)
		{
			//cout<<d[i][j]<<" ";
			if(d[i][j]==1 && d[i+1][j]==1 && d[i+2][j]==1)
			{
				cout<<"0";
				return 0;
			}
			
			if(d[i][j]==1 && d[i+1][j]==1 || d[i][j]==1 && d[i+2][j]==1)
			{
				cout<<"1";
				return 0;
			}
			
			
			
			if(d[i][j]==2)
			{
				cout<<"1";
				return 0;
			}
			if(d[i][j]==3)
			{
				cout<<"0";
				return 0;
			}
			
					
		}
		//cout<<"\n";
	}
	cout<<"2";
	
	
	
	
	
	


}
