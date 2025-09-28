#include <iostream>
#include <string>

using namespace std;

string DtoR(int N){
    
    string R = "";
    //тысячи
    if (N >= 1000){
        R += "M";
        N -= 1000;
    }
    //сотни
    if (N >= 900){
        R += "CM";
        N -= 900;
    } else if (N >= 500) {
        R += "D";
        N -=500;
    } else if (N >= 400) {
        R += "CD";
        N -= 400;
    }

    while (N >=100){
        R += "C";
        N -= 100;
    }
    // десятки
    if (N >= 90){
        R += "XC";
        N -= 90;
    } else if (N >= 50){
        R += "L";
        N -= 50;
    } else if (N >= 40){
        R += "XL";
        N -= 40;
    }

    while (N >= 10) {
        R += "X";
        N -= 10;
    } 
    //единицы
    if (N >= 9){
        R += "IX";
        N -= 9;
    } else if (N >= 5) {
        R += "V";
        N -= 5;
    } else if (N >= 4) {
        R += "IV";
        N -= 4;
    }
    while (N >= 1){
        R += 'I';
        N -= 1;
    }

    return R;
}

int main() {
    int N;
    string M = "";
    std::cout<<"Введите число:"<< endl;
    std::cin>>N;
    string answer = DtoR(N);
    std::cout<< N << "==>" << answer << endl;
}
