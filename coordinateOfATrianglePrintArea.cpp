#include <bits/stdc++.h>
#include <math.h>
#define pi 3.1416
using namespace std;

int main(){
//print Area of triangle coordinate(x1,x2...y1,y2..)

	int x1,x2,x3,y1,y2,y3;
	cin >> x1>>x2>>x3>>y1>>y2>>y3;
	float sum = sqrt(pow((x1-y1),2)+pow((x2-y2),2)+pow((x3-y3),2));
	

	cout<<sum;  

}