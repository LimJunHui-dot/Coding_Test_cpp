#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    stack<int> st;
    string result = "";
    int current = 1;
    
    for (int i = 0; i < n; i++) {
        int target;
        cin >> target;
        
        // target까지 push
        while (current <= target) {
            st.push(current);
            result += "+\n";
            current++;
        }
        
        // pop 연산 검증 및 실행
        if (!st.empty() && st.top() == target) {
            st.pop();
            result += "-\n";
        } else {
            cout << "NO\n";
            return 0;
        }
    }
    
    cout << result;
    return 0;
}
