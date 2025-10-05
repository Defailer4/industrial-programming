
#include <iostream>
using namespace std;

int main(){
    int N, M, W;
    cin >> N >> M >> W;

    char field[N][M];

     for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            field[i][j] = '0';
        }
    }

    for (int i = 0; i < W; i ++){
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        field[x][y] = '*';
    }

    int sosedi[8][2]{
        {-1, -1}, {-1, 0}, {-1, 1},
        {0, -1},           {0, 1},
        {1, -1},  {1, 0},  {1, 1}
    };

     for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (field[i][j] == '*') {
                for (int k = 0; k < 8; k++) {
                    int ni = i + sosedi[k][0];
                    int nj = j + sosedi[k][1];
                    
                    if (ni >= 0 && ni < N && nj >= 0 && nj < M && field[ni][nj] != '*') {
                        if (field[ni][nj] == '0') {
                            field[ni][nj] = '1';
                        } else if (field[ni][nj] >= '1' && field[ni][nj] <= '8') {
                            field[ni][nj]++;
                        }
                    }
                }
            }
        }
    }

    cout << "=======================================================================" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << field[i][j];
            if (j < M - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
