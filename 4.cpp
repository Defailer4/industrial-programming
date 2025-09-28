#include <iostream>

using namespace std;

int main(){
    int A,B,C;
    C = 0;
    std::cout<<"Введите A"<<endl;
    std::cin>>A;
    std::cout<<"Введите B"<<endl;
    std::cin>>B;

    while (A > B) {
        if ((A % 2 == 0) && (A/2 >= B) && (A != B)){
            A = A/2;
            C += 1;
        } else if ((A%2 != 0) && (A-1 >= B) && (A != B)){
            A -= 1;
            C += 1;
        }
        if (A == B){
            std::cout<<C<<endl;
            return 0;
        }
    }
    return 0;
}
