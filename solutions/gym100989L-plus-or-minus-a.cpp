/*
 * Codeforces gym100989L - Plus or Minus (A)
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/100989/problem/L
 * Submission: https://codeforces.com/gym/100989/submission/60699057
 * Solved: 2019-09-16 (PRACTICE)
 */

#include <bits/stdc++.h>


using namespace std;
//srand(time(NULL));
//nombre_aleatoire = rand();

int n,x,t[100],s,k;
char c;

const int INF=1e9;

int solve(int idx,int sum){
	//base case
	if (idx>=n){
		if (sum==0){
			return 0;
		}
		else
			return INF;
	}
	int choice1=solve(idx+1,sum+t[idx]);
	int choice2=1+solve(idx+1,sum-t[idx]);
	return min(choice1,choice2);
}

int main()
{
	scanf("%d",&n);
	scanf("%d",&t[0]);
	for (int i=1; i<n; i++){
		scanf(" %c %d",&c,&x);
		if (c=='+'){
			t[i]=x; 
		}
		else{
			t[i]=x*(-1);
		}
	}
	int ans=solve(1,t[0]);
	if (ans==INF)
		ans=-1;
	printf("%d\n",ans);
}
