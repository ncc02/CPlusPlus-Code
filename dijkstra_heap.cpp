#include<bits/stdc++.h>
#define X first
#define Y second
#define N 10001
#define oo 1000111000
#define pb push_back
#define f1n(i, n) for(int i=1; i<=n; i++)
using namespace std;

typedef pair<int, int> ii;
int n, m, s, t, u, v, c;
vector<ii> a[N];
int d[N];
	
void input(){
	cin >> n >> m >> s >> t;
	f1n(i, m){
		cin >> u >> v >> c;
		a[u].pb(ii(v,c));
		a[v].pb(ii(u,c));
	}	
}

void process(){
	priority_queue<int, vector<ii>, greater<ii>> q;
	fill(d+1, d+N, oo);
	
	d[s]= 0; q.push(ii(0, s));
	while(q.size()){
		ii p= q.top(); q.pop();
		int du= p.X;
		int u= p.Y;
		
		if (du != d[u]) continue;
		
		for(auto p: a[u]){
			int v= p.X;
			int c= p.Y;
			
			if (d[v] > d[u] + c){
				d[v] = d[u] + c;
				q.push(ii(d[v], v));
			}
		}
	}
}

void output(){
	cout<<d[t];
}

int main(){
	input();
	process();
	output();
}
