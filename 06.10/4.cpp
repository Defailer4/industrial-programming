#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int total = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i + j == N - 1) {
                cout << 1;
                total += 1;
            } else if (i + j > N - 1) {
                cout << 2;
                total += 2;
            } else {
                cout << 0;
            }
        }
        cout << endl;
    }
    
    cout << total << endl;    
    return 0;
}
