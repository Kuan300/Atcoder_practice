# include <iostream>
# include <vector>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;

    vector<vector<char>> C(h, vector<char>(w));
    for (int i=0; i<h; i++){
        for (int j=0; j<w; j++){
            cin >> C[i][j];
        }
    }

    char label = '#';
    int top = 0;
    int bottom = h-1;
    int left = 0;
    int right = w-1;
    bool is_left = true;
    bool is_right = true;
    bool is_top = true;
    bool is_bottom = true;

    while (is_top || is_bottom || is_left || is_right){
        is_left = true;
        is_right = true;
        is_top = true;
        is_bottom = true;
        for (int i=top; i<=bottom; i++){
            if (C[i][left] == label){
                is_left = false;
            }
            if (C[i][right] == label){
                is_right = false;
            }
        }
        for (int j=left; j<=right; j++){
            if (C[top][j] == label){
                is_top = false;
            }
            if (C[bottom][j] == label){
                is_bottom = false;
            }
        }
        if (is_left == true)
            left++;
        if (is_right == true)
            right--;
        if (is_top == true)
            top++;
        if (is_bottom == true)
            bottom--;
    }

    for (int i=top; i<=bottom; i++){
        for (int j=left; j<=right; j++){
            cout << C[i][j];
        }
        cout << endl;
    }

    return 0;
}