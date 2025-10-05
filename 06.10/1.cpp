#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Введите N: ";
    cin >> N;
    int arr[N];
    cout << "Введите " << N << " целых чисел:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int counter = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] > 16){
            counter += 1;
        }
    }
    cout << "По правилу не проходят " << counter << " человек" << endl;
    return 0;
}
