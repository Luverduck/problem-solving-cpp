#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    cin.ignore();

    string input;
    for(int n = 0; n < N; ++n)
    {
        getline(cin, input);
        int score = 0;
        for(int i = 0; i < input.length(); ++i)
        {
            if(input[i] == ' ') continue;
            score += input[i] - 'A' + 1;
        }
        if(score == 100)
            cout << "PERFECT LIFE";
        else
            cout << score;
        cout << '\n';
    }
}