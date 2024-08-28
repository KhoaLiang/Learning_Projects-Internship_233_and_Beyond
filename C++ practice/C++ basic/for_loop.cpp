#include<iostream>

using namespace std;

int main() {
    int a, b;
    // sum là biến lưu trữ tổng các số từ a tới b
    // Lưu ý: bạn cần khởi tạo giá trị cho biến sum = 0
    int sum = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        sum = sum + i;
    }
    cout << sum;
    return 0;
}