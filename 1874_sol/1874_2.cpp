#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Vector를 스택처럼 사용
    // 특정상황에서 미세한 성능 최적화를 고려할 때 선택할 수 있습니다.
    vector<int> stack_vec; // 스택 역할
    vector<char> operations; // 연산 기록
    int current = 1; 

    for(int i = 0; i < n; i++){
        int target;
        cin >> target;

        // target까지 push
        while(current <= target){
            stack_vec.push_back(current);
            operations.push_back('+');
            current++;
        }

        // pop 연산 검증 및 실행
        if(!stack_vec.empty() && stack_vec.back() == target){
            stack_vec.pop_back();
            operations.push_back('-');
        }else{
            cout << "NO\n";
            return 0;
        }
    }

    for(char op: operations){
        cout << op << '\n';
    }

    return 0;
}