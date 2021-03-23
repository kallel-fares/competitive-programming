/*
 * Codeforces 1493B - Planet Lapituletti
 * Rating: 1300 | Tags: brute force, implementation
 * Problem:    https://codeforces.com/problemset/problem/1493/B
 * Submission: https://codeforces.com/contest/1493/submission/110825658
 * Solved: 2021-03-23 (PRACTICE)
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


int tab[]={0,1,5,-1,-1,2,-1,-1,8,-1};


bool isvalid(int a,int b,int c,int d,int h,int m)
{
	
	a=tab[a];
	b=tab[b];
	c=tab[c];
	d=tab[d];
	if(d*10+c<h && b*10+a<m && a!=-1 && b!=-1 && c!=-1 && d!=-1)
		return true;
	return false;
}


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("","r",stdin);
	testc
	{
		int h,m;
		cin>>h>>m;
		
		string ch;
		cin>>ch;
		
		int a,b,c,d;
		a=ch[0]-'0';
		b=ch[1]-'0';
		c=ch[3]-'0';
		d=ch[4]-'0';
		
		int auxh=a*10+b,auxm=c*10+d,v=0;
		while(auxh<h && auxm<m)
		{
			if(isvalid(auxh/10,auxh%10,auxm/10,auxm%10,h,m))
			{
				v=1;
				break;
			}
			if((auxm+1)%m==0)
			{
				auxm=0;
				auxh++;
			}
			else
				auxm++;
		}
		
		if(v)
			cout<<auxh/10<<auxh%10<<":"<<auxm/10<<auxm%10;
		else
			cout<<"00:00";
		cout<<"\n";
		
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
