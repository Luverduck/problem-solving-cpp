#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
    int N;
    cin >> N;
    string targets[] = { "for", "while" };
    int res = 0;
    for (int n = 0; n < N; ++n)
    {
        string s;
        cin >> s;
        int temp = 0;
        for (string& target : targets)
        {
            int idx = 0;
            while (true)
            {
                idx = s.find(target, idx);
                if (idx == string::npos) break;
                temp++;
                idx += target.length();
            }
        }
        res = max(res, temp);
    }
    cout << res;
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