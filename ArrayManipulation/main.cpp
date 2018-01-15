#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(){
	long int n, m, i, j, a, b, k, max = 0, x=0;
	cin >> n >> m;

	vector<long int> d(n+1);

	for (i = 0; i < m; i++) {
		cin >> a >> b >> k;
		d[a] += k;
		d[b+1] -= k;
	}

	for (i = 1; i <= n; i++) 
	{
		//cout << d[i] << " ";
		x = x + d[i];
		if (max < x) max = x;	
	}

	cout << max << endl;

	return 0;
}
