#include<iostream>

using namespace std;

bool isPrime(int n){
    if(n % 2 == 0){
        cout << n << " is an even number";
    }
    if(n % 2 != 0){
        cout << n << " is an odd number";
    }
}
int main() {
    int n;
	cin >> n;
    isPrime(n);
	return 0;
}
