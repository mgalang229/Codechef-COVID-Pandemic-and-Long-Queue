#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; ++i)
			cin >> a[i];
		int mn=INT_MAX;
		for(int i=0; i<n; ++i)
			for(int j=i+1; j<n; ++j)
				if(a[i]&&a[j])
					mn=min(mn, abs(i-j));
		cout << (mn>=6?"YES":"NO") << "\n";
	}
}
