/*
 * Codeforces 1326D1 - Prefix-Suffix Palindrome (Easy version)
 * Rating: 1500 | Tags: hashing, string suffix structures, strings
 * Problem:    https://codeforces.com/problemset/problem/1326/D1
 * Submission: https://codeforces.com/contest/1326/submission/132120668
 * Solved: 2021-10-16 (PRACTICE)
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



int ispal(string& ch)
{
	int i=0,j=ch.size()-1;
	
	while(i<ch.size())
	{
		if(ch[i]!=ch[j])
			return 0;
		i++;
		j--;
	}
	return 1;
	
	
}



int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("","r",stdin);
	testc
	{
		
		string ch;
		cin>>ch;
		
		int i=0,j=ch.size()-1;
		
		string pre="";
		
		while(i<j && ch[i]==ch[j])
		{
			pre+=ch[i];
			i++;
			j--;
		}
		
		string aux=string(ch.begin()+i,ch.begin()+j+1);
		
		
		string core_pal="";
		for(int i=aux.size()-1;i>=0;i--)
		{
			string chl=string(aux.begin(),aux.begin()+i+1);
			
			
			string chr=string(aux.begin()+aux.size()-i,aux.end());
			if(ispal(chl))
			{
				core_pal=chl;
				break;
			}
			
			if(ispal(chr))
			{
				core_pal=chr;
				break;
			}
		}
		
		
		
		cout<<pre<<core_pal<<string(pre.rbegin(),pre.rend())<<"\n";
		
		
	
	}


}
