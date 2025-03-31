#include <iostream>
#include <algorithm>

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
    while(true)
    {
        getline(cin, input);
        if(input == "END") break;
        reverse(input.begin(), input.end());
        cout << input << '\n';
    }

}