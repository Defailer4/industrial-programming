#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K, L;
    cin >> N >> K >> L;
    
    vector<int> costs(N);
    for (int i = 0; i < N; i++) {
        cin >> costs[i];
    }
    

    sort(costs.begin(), costs.end(), greater<int>());
    
    int max_cost = 0;
    

    vector<int> used(N, 0);
    
    for (int i = 0; i < K; i++) {
        int best_idx = -1;
        int best_cost = -1;
        int same_count = 0;
        
        for (int j = 0; j < N; j++) {
            if (used[j] < L) {
                int current_same = 0;
                for (int k = 0; k < N; k++) {
                    if (costs[k] == costs[j] && used[k] > 0) {
                        current_same++;
                    }
                }
                
                if (current_same < L && costs[j] > best_cost) {
                    best_cost = costs[j];
                    best_idx = j;
                }
            }
        }
        
        if (best_idx != -1) {
            max_cost += best_cost;
            used[best_idx]++;
        }
    }
    
    cout << max_cost << endl;
    
    return 0;
}
