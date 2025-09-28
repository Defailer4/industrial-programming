#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double S,A,V;
    std::cout << "Введите S" << endl;
    std::cin >> S;
    std::cout << "Введите A" << endl;
    std::cin >> A;
    std::cout << "Введите V" << endl;
    std::cin >> V;
    //                      S = V0*t + (a*t*t)/2
    double t1,t2;
    t1 = (((-V) + (pow((pow(V,2)+2*A*S),0.5)))/A);
    t2 = (((-V) - (pow((pow(V,2)+2*A*S),0.5)))/A);
    //std:: cout << t1 << endl;
    //std:: cout << t2 << endl;
    if (t1 > t2) {
        std::cout << t1 << endl;
    } else {
        std::cout << t2 << endl;
    }
    return 0;

}
