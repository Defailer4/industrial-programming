 #include <iostream>
 using namespace std;

 int main() {
    int N, K;
    cout << "Введите N: ";
    cin >> N;
    int arr[N];
    cout << "Введите порядок очереди из " << N << " человек:" << endl;
    for (int i = 0; i < N; i++ ){
        cin >> arr[i];
    }
    cout << "Введите количество пуговиц: ";
    cin >> K;
    while (K > N){
        K -= N;
    }
    for (int i = N - K; i < N; i++ ){
        cout << arr[i] << " ";
    }
    for (int i = 0; i < N - K;i ++){
        cout << arr[i] << " ";
    }
}
