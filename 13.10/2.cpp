#include <iostream>
#include <string>
using namespace std;

string brackets(string inputString){
    int L = size(inputString);
    string answer = "";
    int mid = L/2;

    if(L < 3){
        return "Строка слишком короткая!!!";
    }

    for(int i = 0; i < mid - 1; i++){
        answer += inputString[i];
        answer += "(";
    }

    if (L % 2 == 1) {
        answer += inputString[mid - 1];
        answer += "(";
        answer += inputString[mid];
        answer += ")";
        answer += inputString[mid + 1];
    } else {
        answer += inputString[mid - 1];
        answer += inputString[mid];
    }

    int q;
    if(L%2 == 0){
        q = 1;
    } else {
        q = 2;
    }

    for(int i = mid + q; i < L ;i++){
        answer +=")";
        if(i<L){
            answer += inputString[i];
        }
    }
    
    return answer;
}


int main(){
    string inputString = "";
    cout <<"Введите строку:"<<endl;
    cin >> inputString;
    cout << brackets(inputString);
    return 0;
}
