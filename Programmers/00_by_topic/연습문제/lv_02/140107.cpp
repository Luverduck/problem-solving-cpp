#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(int k, int d) {
    long long answer = 0;

    for(long long y = 0; y <= d; y += k)
        answer += (long long)sqrt(1LL * d * d - y * y) / k + 1;

    return answer;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k, d;
    cin >> k >> d;
    cout << solution(k, d);
}