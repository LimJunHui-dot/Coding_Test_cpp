#include <stack>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // 기본 스택 시뮬레이션(STL stack 사용)
    stack<int> st;
    vector<char> operations;
    int current = 1;

    for(int i = 0; i < n; i++){
        int target;
        cin >> target;

        // target까지 push
        while(current <= target){
            st.push(current);
            operations.push_back('+');
            current++;
        }

        // pop 연산 검증 및 실행
        if(!st.empty() && st.top() == target){
            st.pop();
            operations.push_back('-');
        }else{
            cout << "NO\n";
        }
    }

    for(char op: operations){
        cout << op << '\n';
    }

    return 0;
}