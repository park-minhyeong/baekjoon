#include <iostream>
using namespace std;
int n, m, j, temp, ret;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m >> j;
    int l = 1;
    for (int i = 0; i < j; i++) {
        int r = l + m - 1;
        cin >> temp;
        if (temp >= l && temp <= r)continue;
        else{
            if (temp < l) {
                ret += l - temp;
                l =temp;
                
            }
            else {
                l += temp - r;
                ret += temp - r;
            }
        }
    }
    cout << ret;

}