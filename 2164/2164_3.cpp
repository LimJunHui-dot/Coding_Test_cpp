#include <iostream>
using namespace std;

int josephus(int n, int k){
    if(n == 1) return 1;
    return (josephus(n-1, k) + k - 1) % n + 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << josephus(n, 2) << endl;
    return 0;
}