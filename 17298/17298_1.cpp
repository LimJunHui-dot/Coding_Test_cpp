#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// 스택 기반 최적화 해법
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> answer(n, -1);
    stack<int> s; // 인덱스를 저장하는 스택

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        // 현재 원소가 스택 top의 원소보다 크면 오큰수 발견
        while(!s.empty() && a[s.top()] < a[i]){
            answer[s.top()] = a[i];
            s.pop();
        }
        s.push(i); // 현재 인덱스를 스택에 추가
    }

    for(int i = 0; i < n; i++){
        cout << answer[i];
        if(i < n - 1) cout << "";
    }
    cout << "\n";

    return 0;
}