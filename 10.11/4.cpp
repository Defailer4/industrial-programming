#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    string ss;
    stack<char> stroki;
    bool Answer = true;

    cout<<"Введите строку: ";
    getline(cin,ss);

    for (int i = 0; i < ss.length();i++){
        if (ss[i] == '('){
            stroki.push(ss[i]);
        }else if(ss[i] == ')'){
            if (stroki.empty()){
                Answer = false;
                break;
            }
            stroki.pop();

        }
    }
    if (!stroki.empty()){
        Answer = false;
    }
    cout<< (Answer ? "yes" : "no")<<endl;
    return 0;
}   
