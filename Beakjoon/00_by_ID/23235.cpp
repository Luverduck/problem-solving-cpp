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
    int no = 1;
    while(true)
    {
        getline(cin, input);
        if(input == "0") break;
        cout << "Case " << no++ << ": Sorting... done!\n";
    }
}