#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
 int n1,n2,n3;

    cin >> n1>>n2>>n3;

        if(n1>n2){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    if(n2>n3){
        int temp = n2;
        n2 = n3;
        n3 = temp;
    }

    if(n1>n3){
        int temp = n1;
        n1 = n3;
        n3 = temp;
    }
    cout << "Accending order: ";
    cout << n1 <<" "<<" "<< n2<<" "<< n3;

}