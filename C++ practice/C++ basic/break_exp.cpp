#include<iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i == 11) {
            break;
        }
        cout << i << " ";
    }
    return 0;
}