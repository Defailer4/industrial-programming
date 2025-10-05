 #include <iostream>

 using namespace std;

 int main() {
    int N, K;
    cout << "Введите N: ";
    cin >> N;
    int Q = N*2;
    int arr[Q];
    cout << "Введите порядок очереди из " << N << " человек:" << endl;
    for (int i = 0; i < N; i++ ){
        cin >> arr[i];
        arr[i+5] = arr[i];
    }
    cout << "Введите количество пуговиц: ";
    cin >> K;
    while (K > N){
        K -= N;
    }
    for (int i = N-K; i < Q - K; i++ ){
        cout << arr[i] << " ";
    }
}
