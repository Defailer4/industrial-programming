#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canDistribute(const vector<int>& calories, int D, int maxDiff) {
    int days = 1;
    int start = 0;
    
    for (int i = 1; i < calories.size(); i++) {
        if (calories[i] - calories[start] > maxDiff) {
            days++;
            start = i;
        }
    }
    
    return days <= D;
}

int main() {
    int N, D;
    cin >> N >> D;
    
    vector<int> calories(N);
    for (int i = 0; i < N; i++) {
        cin >> calories[i];
    }
    
    sort(calories.begin(), calories.end());
    
    int left = 0;
    int right = calories[N-1] - calories[0];
    int answer = right;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (canDistribute(calories, D, mid)) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    cout << answer << endl;
    
    return 0;
}
