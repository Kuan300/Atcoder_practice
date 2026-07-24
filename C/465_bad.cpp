# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

// 時間複雜度需要從O(n^2)改善到O(n)

// void reverse(int k, vector<int> &A){
//     for (int i=0; i<k/2; i++){
//         swap(A[i], A[k-i-1]);
//     }
// }

int main(){
    // 加上這兩行，cin/cout 的速度會提升數倍，直逼 C 語言的 scanf/printf
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    string s;
    cin >> s;

    vector<int> A(n);
    for(int i = 1; i <= n; i++){
        A[i-1] = i;
        if (s[i-1] == 'o')
            reverse(A.begin(), A.begin()+i);
    }
    
    for (int i=0; i<n; i++){
        cout << A[i] << " ";
    }
}