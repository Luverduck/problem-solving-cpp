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

    int nums[4] = { 0, };
    for(int i = 0; i < 4; ++i)
        cin >> nums[i];

    if (nums[0] >= 8 && nums[3] >= 8 && nums[1] == nums[2])
        cout << "ignore";
    else
        cout << "answer";
}