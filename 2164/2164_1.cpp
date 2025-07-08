#include <iostream>
#include <queue>
using namespace std;


// STL queue를 이용한 시뮬레이션
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    queue<int> q;
    for(int i = 1; i <= n; i++){
        q.push(i);
    }

    while(q.size() > 1){
        q.pop(); // 맨 위 카드 버리기

        int top = q.front(); 
        q.pop();
        q.push(top); // 그 다음 카드를 맨 아래로
    }

    cout << q.front() << endl;
    return 0;
}