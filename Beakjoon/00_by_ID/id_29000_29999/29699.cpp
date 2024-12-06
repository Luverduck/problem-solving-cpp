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

    string word = "WelcomeToSMUPC";
    int N;
    cin >> N;
    cout << word[(N - 1) % word.length()];
}