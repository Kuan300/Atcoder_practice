#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int height, time;
    map<int, int, greater<int>> height_and_time;

    for (int i=0; i<n; i++){
        if (cin >> height >> time)
            height_and_time[height] = time;
    }

    int q;
    cin >> q;
    vector<int> t(q);

    for (int j=0; j<q; j++){
        cin >> t.at(j);
    }

    vector<pair<int, int>> filtered(n);
    int max_num_so_far = -1;
    for (auto const& [h, t] : height_and_time){
        if (t > max_num_so_far){
            filtered.push_back({t,h});
            max_num_so_far = t;
        }
    }

    for (int j=0; j<q; j++){
        auto it = upper_bound(filtered.begin(), filtered.end(), make_pair(t[j], (int)2e9));

        cout << it->second << "\n";
    }
}