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

    int N, A, B;
    cin >> N >> A >> B;

    if(A == B)
        cout << "Anything";
    else
        cout << (A < B ? "Bus" : "Subway");
}