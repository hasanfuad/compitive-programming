#include <stdio.h>
#include <math.h>
using namespace std;

int main(){

	int num,start,end,temp,rem;
	cin>>start;
	cin>>end;

	for(num = start; num <= end; num++){
		temp = num;
		int sum = 0;
		while(temp){
			rem = temp%10;
			sum = sum*10+rem;
			temp = temp/10;
		}
		if(num == sum){
			cout << " "<< num;
		}
	}
}
