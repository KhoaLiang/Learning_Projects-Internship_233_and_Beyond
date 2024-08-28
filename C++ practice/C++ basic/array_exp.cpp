#include<iostream>

using namespace std;

int main() {
    int a[10], sum = 0;
    int length = sizeof(a) / sizeof(a[0]);
    for(int i = 0; i < length; i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << sum;
    return 0;
}
