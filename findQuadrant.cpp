#include <bits/stdc++.h>
#include <math.h>
#define pi 3.1416
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int co1,co2;
	cin>> co1>> co2;

	if(co1 > 0 && co2 > 0){
		cout << "first quadrant";
	}
	else if(co1 < 0 && co2 > 0){
		cout << "2nd quadrant";
	}	
	else if(co1 < 0 && co2 < 0){
		cout << "Third quadrant";
	}	
	else if(co1 > 0 && co2 < 0){
		cout << "fourth quadrant";
	}	
	else{
		cout << "Invalid Quadrant";
	}

    return 0;
}
