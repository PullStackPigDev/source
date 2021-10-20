#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int r = 0;
    cin >> r;
    int lr = to_string(r).length();
    int c = 0;
    cin >> c;
    int lc = to_string(c).length();
    vector<vector<int>> res {};
    for (int i = 0; i < r; ++i) {
        vector<int> j {};
        for (int m = 0; m < c; ++m) {
            j.push_back(0);
        }
        res.push_back(j);
    }
    for (int i = 0; i < r; i++) {
       for (int j = 0; j < c; j++) {
          cout << res[i][j] << " ";
       }
       cout << endl;
    }
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string INPUT;
        cin >> INPUT;
        if (INPUT[0] == 'R') {
            int num = 0;
            for (int k = 0; k < lr; k++) {
                num += INPUT[k+2];
            }
            for (int i = 0; i < r; i++) {
            res[num][i] = (res[num][i] == 0) ? 1 : 0;
            }
        } else {
            int num = 0;
            for (int k = 0; k < lr; k++) {
                num += INPUT[k+2];
            }
            for (int i = 0; i < r; i++) {
            res[i][num] = (res[num][i] == 0) ? 1 : 0;
            }
        }
    }
}
