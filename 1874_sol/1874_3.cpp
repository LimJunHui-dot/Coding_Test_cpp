#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // 배열을 이용한 스택 구현
    // STL 사용 x (제한된 환경이나 메모리 사용량 최소화)
    int stack_arr[100001];
    char operations[200001];
    int stack_top = -1;
    int op_count = 0;
    int current = 1;

    for(int i = 0; i < n; i++){
        int target;
        cin >> target;

        // target까지 push
        while(current <= target){
            stack_arr[++stack_top] = current;
            operations[op_count++] = '+';
            current++;
        }

        // pop 연산 검증 및 실행
        if(stack_top >= 0 && stack_arr[stack_top] == target){
            stack_top--;
            operations[op_count++] = '-';
        }else{
            cout << "NO\n";
            return 0;
        }
    }

    for(int i = 0; i < op_count; i++){
        cout << operations[i] << '\n';
    }

    return 0;
}