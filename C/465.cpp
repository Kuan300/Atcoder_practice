# include <iostream>
# include <deque>
using namespace std;

int main(){
    // I/O 加速
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    deque<int> dq;
    bool is_reversed = false;

    // 用一個一個人下去排隊去想
    for (int i=0; i<n; i++){
        if (is_reversed)
            dq.push_front(i+1);
        else
            dq.push_back(i+1);

        // 下一個人要反向進來
        if (s[i] == 'o')
            is_reversed = !is_reversed;
    }

    // 輸出(如果is_reversed是true就要反過來輸出)
    // 因為我們偷懶，並沒有整排翻轉，所以如果最後是反向的，我們就從deque的尾巴開始輸出
    if (is_reversed){
        for (int i=n-1; i>=0; i--){
            cout << dq[i] << " ";
        }
    }
    else{
        for (int i=0; i<n; i++){
            cout << dq[i] << " ";
        }
    }
}