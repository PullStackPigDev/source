#include <iostream>
#include <string>
using namespace std;

int main()
{
    string INP = "";
    cin >> INP;
    int l = 0, m = 0, s = 0;
    for (char i: INP) {
        switch(i){
            case 'L':
                l++;
                break;
            case 'M':
                m++;
                break;
            case 'S':
                s++;
                break;
        }
    }
    int swaps = 0;
    for (int i = 0; i < l; i++) {
        char k = INP[i];
        if (k == 'L') {
            continue;
        } else if (k == 'M') {
            for (int j = l; j < l+m+s; j++) {
                char e = INP[j];
                if (e == 'L') {
                    INP[j] = 'M';
                    INP[i] = 'L';
                    swaps++;
                }
            }
        } else if (k == 'S') {
            for (int j = l; j < l+m+s; j++) {
                char e = INP[j];
                if (e == 'L') {
                    INP[j] = 'S';
                    INP[i] = 'L';
                    swaps++;
                }
            }
        }
    }
    for (int i = l; i < l+m; i++) {
        char k = INP[i];
        if (k == 'M') {
            continue;
        } else if (k == 'S') {
            for (int j = l+m; j < l+m+s; j++) {
                char e = INP[j];
                if (e == 'M') {
                    INP[j] = 'S';
                    INP[i] = 'M';
                    swaps++;
                } else if (j == j+m-1) {
                    for (int ji = l+m; ji < l+m+s-1; ji++) {
                        if (e == 'L') {
                            
                        }
                    }
                }
            }
        }
    }
    cout<<'\n'<<swaps;
    return 0;
}
