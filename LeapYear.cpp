#include <bits/stdc++.h>
#include <math.h>
#define pi 3.1416
using namespace std;

int main(){
	int year ;
	cin>> year;

	if(year % 400 == 0 ||(year % 4 == 0 && year % 100 != 0)){
		cout<<"leap year";
	}
	else{
		cout<< "Not a Leap Year";
	}

}