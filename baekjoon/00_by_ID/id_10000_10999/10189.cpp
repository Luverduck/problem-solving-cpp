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

    cout << R"(#  # #### #### #  #
#### #  # #  # # #
#### #  # #  # # #
#  # #### #### #  #)";

}