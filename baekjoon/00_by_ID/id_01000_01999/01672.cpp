#include <iostream>

using namespace std;

char table[4][4] = {
    {'A', 'C', 'A', 'G'},
    {'C', 'G', 'T', 'A'},
    {'A', 'T', 'C', 'G'},
    {'G', 'A', 'G', 'T'},
};

int getIndex(char c)
{
    switch (c)
    {
        case 'A':
            return 0;
        case 'G':
            return 1;
        case 'C':
            return 2;
        case 'T':
            return 3;
        default:
            return -1;
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

    int N;
    string input;
    cin >> N >> input;
    while (N--)
        input[N - 1] = table[getIndex(input[N - 1])][getIndex(input[N])];
    cout << input[0];
}