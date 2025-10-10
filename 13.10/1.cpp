#include <iostream>
using namespace std;

bool mena(int numberOfCigaretts){
    int numberOfKotlyGeneralski = 69;
    if(numberOfCigaretts == numberOfKotlyGeneralski){
        return true;
    } else {
        return false;
    }
}

int main(){
    int numberOfCigaretts;
    cout << "Введите numberOfCigaretts: ";
    cin >> numberOfCigaretts;
    cout << mena(numberOfCigaretts);
    return 0;
}
