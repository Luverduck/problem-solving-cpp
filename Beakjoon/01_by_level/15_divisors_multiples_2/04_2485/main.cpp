#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    // a와 b의 최대 공약수를 반환
    while(b != 0)
    {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 기존에 존재하는 가로수의 수
    int N;
    cin >> N;

    // 기존에 존재하는 가로수의 위치를 벡터 pos에 저장
    vector<int> pos(N);
    for(int i = 0; i < N; ++i)
        cin >> pos[i];

    // 기존에 존재하는 가로수간의 간격을 벡터 diff에 저장
    vector<int> diff;
    for(int i = 0; i < N - 1; ++i)
        diff.emplace_back(pos[i + 1] - pos[i]);

    // 기존에 존재하는 가로수간의 간격의 최대 공약수 g 계산
    int g = diff[0];
    for(int i = 1 ; i < N - 1; ++i)
        g = gcd(g, diff[i]);

    // 기존에 존재하는 가로수 사이에 새로 심을 가로수의 수 result 계산
    int result = 0;
    for(auto& i : diff)
        result += i / g - 1;

    cout << result;
}