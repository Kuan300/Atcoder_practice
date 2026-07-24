#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    map<int, int> c;
    for (int i=0; i<n; i++){
        int x;
        int y;
        if (cin >> x >> y)
            c[x] = y;
    }

    vector<pair<int, int>> xSort(c.begin(), c.end());

    int count = 1;
    int min = xSort[0].second;
    for (int i=1; i<n; i++){
        if (xSort[i].second < min){
            count++;
            min = xSort[i].second;
        }
    }

    cout << count;
}