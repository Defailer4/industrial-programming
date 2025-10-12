#include <iostream>
using namespace std;

void ananas() {
    int num;
    cin >> num;
    if (num != 0) {
        ananas();
    }
    cout << num << endl;
}

int main() {
    ananas();
    return 0;
}
