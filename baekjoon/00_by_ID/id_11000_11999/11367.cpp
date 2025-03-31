#include <iostream>

using namespace std;

void solution()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string name;
        int score;
        cin >> name >> score;
        cout << name << ' ';
        if (score < 60)
            cout << 'F';
        else
        {
            if (score >= 90) cout << 'A';
            else if (score >= 80) cout << 'B';
            else if (score >= 70) cout << 'C';
            else if (score >= 60) cout << 'D';
            if (score == 100 || score % 10 >= 7) cout << '+';
        }
        cout << '\n';
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