#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

int main() {
    cout<<"ПРОГРАММА РАБОТАЕТ ТОЛЬКО С АНГЛ СЛОВАМИ (Я НЕ ПРИДУМАЛ РЕАЛИЗАЦИЮ)"<<endl;
    string text;
    cout << "Введите текст: ";
    getline(cin, text);
    
    vector<string> result;
    set<string> checker;
    string word = "";
    
    for (int i = 0; i <= text.size(); i++) {
        char c = (i < text.size()) ? text[i] : ' ';
        
        if (c >= 'A' && c <= 'Z') c += 32;
        else if (c >= 'А' && c <= 'Я') c += 32;
        else if (c == 'Ё') c = 'ё';
        
        if ((c >= 'a' && c <= 'z') || (c >= 'а' && c <= 'я') || c == 'ё' || c == '-') {
            word += c;
        } else if (!word.empty()) {
            if (checker.find(word) == checker.end()) {
                result.push_back(word);
                checker.insert(word);
            }
            word = "";
        }
    }
    
    cout << "Уникальные слова:"<<endl;
    for (const string& w : result) {
        cout << w << endl;
    }
    
    return 0;
}
