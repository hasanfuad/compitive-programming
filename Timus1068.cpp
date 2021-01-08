#include <bits/stdc++.h>
#include <math.h>
#define pi 3.1416
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n, sum = 0;

	cin >> n;

	if(n>0){
		sum = (n*(n+1))/2;
	}
	else if (n<=0){
		sum = ((n*(n-1))/2)*(-1);
		sum++;
	}

	cout << sum;

    return 0;
}
