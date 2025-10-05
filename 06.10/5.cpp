#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int result = 0;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        result = result^x;
    }
    
    cout << result << endl;
    
    return 0;
}
