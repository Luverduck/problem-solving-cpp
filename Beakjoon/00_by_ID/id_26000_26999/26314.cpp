#include <iostream>
#include <unordered_set>

using namespace std;

void solution()
{
    unordered_set<char> target = {'a', 'e', 'i', 'o', 'u'};

    int N;
    cin >> N;
    for (int n = 0; n < N; ++n)
    {
        string name;
        cin >> name;
        int res = 0;
        for (char& c : name)
        {
            if (target.find(c) != target.end()) res++;
            else res--;
        }
        cout << name << "\n" << (res > 0 ? 1 : 0) << '\n';
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