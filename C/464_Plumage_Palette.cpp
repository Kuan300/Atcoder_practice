#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n), d(n), b(n);
    vector<vector<int>> change_at(m+1); // ***

    for (int i=0; i<n; i++){
        cin >> a.at(i) >> d.at(i) >> b.at(i);
        change_at[d[i]].push_back(i); // 第 j 天需要改變的項目編號清單
    }

    map<int, int> count; // **
    int distinct_count = 0;
    
    // Lambda 輔助函式的使用方式, [&]代表全部都抓址
    auto add_val = [&](int val){
        if (count[val] == 0)
            distinct_count++;
        count[val]++;
    };

    auto remove_val = [&](int val){
        count[val]--;
        if (count[val] == 0)
            distinct_count--;
    };

    // 初始狀態
    for (int i=0; i<n; i++)
        add_val(a[i]);

    for (int j=1; j<=m; j++){
        for (int num : change_at[j]){
            add_val(b[num]);
            remove_val(a[num]);
        }
        cout << distinct_count << "\n";
    }
}