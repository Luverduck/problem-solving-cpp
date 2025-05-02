#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solution()
{
    int N, D;
    while(cin >> N >> D) {
        if(N == 0 && D == 0) break;
        cin.ignore();
        vector<int> v(N);
        for(int d = 0; d < D; ++d) {
            for(int n = 0; n < N; ++n) {
                int temp;
                cin >> temp;
                if(temp == 0) continue;
                v[n]++;
            }
        }
        cout << (find(v.begin(), v.end(), D) != v.end() ? "yes" : "no") << '\n';
    }
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solution();
}