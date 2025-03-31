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

    string input;
    cin >> input;
    int cnt = input.length() - 2;

    string output("h");
    output.append(string(2 * cnt, 'e'));
    output.append(string("y"));

    cout << output;
}