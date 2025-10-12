#include <iostream>
using namespace std;

void transfer(int N, int from, int second, int to) {
    if (N == 1) {
        cout << "Ingredient " << N << " move from " << from << " to " << to << endl;
        return;
    }
    
    transfer(N - 1, from, to, second);
    cout << "Ingredient " << N << " move from " << from << " to " << to << endl;
    transfer(N - 1, to, second, from);
}

int main() {
    int N;
    cin >> N;
    
    transfer(N, 1, 2, 3);
    
    return 0;
}
