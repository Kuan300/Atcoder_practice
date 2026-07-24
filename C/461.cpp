// Greedy
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, m;
    if (!(cin >> n >> k >> m)) return 0;

    // 按照顏色 C_i 將價值 V_i 分組
    vector<vector<long long>> color_gems(n+1);
    for (int i=0; i<n; i++){
        int c;
        long long v;
        cin >> c >> v;
        color_gems[c].push_back(v);
    }

    // 將每種顏色的價值由大到小排序
    vector<long long> max_per_color;
    vector<long long> remaining_color;

    for (int i=0; i<n; i++){
        if (color_gems[i].empty())
            continue;
        
        sort(color_gems[i].rbegin(), color_gems[i].rend());

        // 每種顏色的最大值取出，用來滿足 distinct 條件
        max_per_color.push_back(color_gems[i][0]);

        // 該顏色剩下的寶石放進剩餘池
        for (int j=1; j<color_gems[i].size(); i++){
            remaining_color.push_back(color_gems[i][j]);
        }
    }

    // 1. 先處理 mandatory 部分：取前 M 大不同顏色的代表


    // 2. 把沒選到的顏色代表放回剩餘池，一起競爭剩下的 K - M 個名額


    // 3. 貪婪選剩下的 K - M 顆最大值
    
}