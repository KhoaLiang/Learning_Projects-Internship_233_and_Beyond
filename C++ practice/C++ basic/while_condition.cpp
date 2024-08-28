#include<iostream>

using namespace std;

int main() {
	int n, i = 1, count = 0;
    cin >> n;
    while(i <= n){
        if(n % i == 0){
            count++;
        }
        i++;
    }
    cout << count;
	return 0;
}