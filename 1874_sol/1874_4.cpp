#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// 별도 함수로 분리(코드의 가독성과 재사용성을 높일 때)
bool canMakeSequence(const vector<int>& sequence, vector<char>& operations){
    stack<int> st;
    int current = 1;

    for(int target: sequence){
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
            return false;
        }
    }

    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> sequence(n);
    for(int i = 0; i < n; i++){
        cin >> sequence[i];
    }

    vector<char> operations;

    if(canMakeSequence(sequence, operations)){
        for(char op: operations){
            cout << op << '\n';
        }
    }else{
        cout << "NO\n";
    }

    return 0;
}