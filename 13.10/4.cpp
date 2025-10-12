#include <iostream>
using namespace std;

long long stepen(int Num, int PowOfNum){
    long long Answer;
    Answer = Num;
    while(PowOfNum != 1){
        Answer *= Num;
        PowOfNum -= 1;
    }
    return Answer;
}

int main(){
    int Num, PowOfNum;
    cout << "Введите число и степень:" << endl;
    cin >> Num >> PowOfNum;
    cout << stepen(Num, PowOfNum);
    return 0;
}
