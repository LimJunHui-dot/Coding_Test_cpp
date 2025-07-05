#include <iostream>
#include <vector>
using namespace std;

// 브루트포스 해법
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> answer(n, -1);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                answer[i] = a[j];
                break; // 첫 번째로 큰 수를 찾으면 중단
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << answer[i];
        if (i < n - 1) cout << " ";
    }
    cout << "\n";
    
    return 0;
}
