#include <iostream>
#include <vector>
#include <stack>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> answer(n, -1);
    stack<pair<int, int>> s; //{값, 인덱스}

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        while(!s.empty() && s.top().first < a[i]){
            answer[s.top().second] = a[i];
            s.pop();
        }
        s.push({a[i], i});
    }

    for(int i = 0; i < n; i++){
        cout << answer[i];
        if(i < n - 1) cout << " ";
    }

    cout << "\n";

    return 0;
}