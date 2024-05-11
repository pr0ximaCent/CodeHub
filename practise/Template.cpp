#include<bits/stdc++.h>
using namespace std;
#define ll				long long int
#define vi				vector<int>
#define vl				vector<ll>
#define	pii				pair<int,int>
#define pil				pair<int, ll>
#define pll				pair<ll, ll>
#define pli 			pair<ll, int>
#define pb(v, a)		v.push_back(a)
#define mp(a, b)		make_pair(a, b)
#define MOD				1000000007
#define rep(i, a, b)	for(i=a; i<=b; ++i)
#define rrep(i, a, b)	for(i=a; i>=b; --i)
#define si(a)			scanf("%d", &a)
#define sl(a)			scanf("%lld", &a)
#define pi(a)			printf("%d", a)
#define pl(a)			printf("%lld", a)
#define pn 				printf("\n")
ll pow_mod(ll a, ll b)
{
	ll res = 1;
	while(b)
	{
		if(b & 1)
			res = (res * a) % MOD;
		a = (a * a) % MOD;
		b >>= 1;
	}
	return res;
}
set<int> s;
int main()
{
	int t, i, n, x, j, tmp;
	si(t);
	assert(t >= 1 && t <= 50);
	rep(i, 1, t)
	{
		s.clear();
		si(n);
		si(x);
		assert(n >= 1 && n <= 13000);
		assert(x >= 1 && x <= 13000);
		rep(j, 1, n)
		{
			si(tmp);
			assert(tmp >= 1 && tmp <= 1000000000);
			s.insert(tmp);
		}
		if(s.size() < x)
			printf("Bad husband\n");
		else if(s.size() > x)
			printf("Lame husband\n");
		else
			printf("Perfect husband\n");
	}
	return 0;
}