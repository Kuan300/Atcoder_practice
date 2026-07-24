# include <iostream>
# include <vector>
using namespace std;

int main(){
    int n;
    char x;
    cin >> n >> x;

    vector<string> s(n);
    for (int i=0; i<n; i++){
        cin >> s[i];
    }

    bool is_valid = false;
    if (x == 'A'){
        for (int i=0; i<n; i++){
            if (s[i][0] == 'o'){
                is_valid = true;
                break;
            }
        }
    }
    else if (x == 'B'){
        for (int i=0; i<n; i++){
            if (s[i][1] == 'o'){
                is_valid = true;
                break;
            }
        }
    }
    else if (x == 'C'){
        for (int i=0; i<n; i++){
            if (s[i][2] == 'o'){
                is_valid = true;
                break;
            }
        }
    }
    else if (x == 'D'){
        for (int i=0; i<n; i++){
            if (s[i][3] == 'o'){
                is_valid = true;
                break;
            }
        }
    }
    else if (x == 'E'){
        for (int i=0; i<n; i++){
            if (s[i][4] == 'o'){
                is_valid = true;
                break;
            }
        }
    }

    if (is_valid){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}