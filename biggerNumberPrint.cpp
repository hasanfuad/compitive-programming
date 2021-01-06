#include <bits/stdc++.h>
using namespace std;

int main(){

	int num1, num2,num3;
	cin>> num1;
	cin>> num2;
	cin>> num3;

	if(num1 > num2 && num1>num3){
		cout<< "Number1 is bigger: "<< num1;
	}
	else if (num2 > num1){
		cout<< "Number2 is bigger: "<< num2;
	}
	else if (num3 > num2){
		cout<< "Number3 is bigger: "<< num3;
	}
	else{
		cout<< "This is equal";
	}

}