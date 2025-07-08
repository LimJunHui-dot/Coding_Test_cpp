#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    // n보다 작거나 같은 가장 큰 2의 거듭제곱 찾기
    int powerOf2 = 1;
    while (powerOf2 * 2 <= n) {
        powerOf2 *= 2;
    }
    
    if (n == powerOf2) {
        cout << n << endl;
    } else {
        cout << 2 * (n - powerOf2) << endl;
    }
    
    return 0;
}
