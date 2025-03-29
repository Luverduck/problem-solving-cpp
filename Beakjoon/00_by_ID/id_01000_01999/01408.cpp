#include <iostream>
#include <iomanip>

using namespace std;

void solution()
{
    string current, start;
    cin >> current >> start;
    auto lambda = [](string& s) -> int {
        return stoi(s.substr(0, 2)) * 3600 + stoi(s.substr(3, 2)) * 60 + stoi(s.substr(6, 2));
    };
    int remain = (lambda(start) - lambda(current) + 86400) % 86400;
    cout << setw(2) << setfill('0') << remain / 3600 << ":"
    << setw(2) << setfill('0') << remain / 60 % 60 << ":"
    << setw(2) << setfill('0') << remain % 60;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solution();
}