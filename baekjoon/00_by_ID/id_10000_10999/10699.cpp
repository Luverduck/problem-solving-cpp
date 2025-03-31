#include <iostream>
#include <chrono>
#include <iomanip> // put_time()

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    chrono::time_point now = chrono::system_clock::now();

    time_t now_time = chrono::system_clock::to_time_t(now);

    tm local_time = *localtime(&now_time);

    cout << put_time(&local_time, "%Y-%m-%d");
}