#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string input;
    cin >> input;

    for(int i = 0; i < input.length(); ++i)
    {
        char c = input[i];
        if(islower(c))
            c = toupper(c);
        else
            c = tolower(c);
        cout << static_cast<char>(c);
    }
}