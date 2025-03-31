#include <iostream>

using namespace std;

int cnt = 0;
string result;

// n개의 원판을 i에서 j로 temp를 거쳐서 옮긴다
void move(int n, int i, int j, int temp)
{
    // 1개의 원판을 i에서 j로 옮기는 경우
    if(n == 1)
    {
        // i(출발지)와 j(목적지) 출력
        result.append(to_string(i) + ' ' + to_string(j) + '\n');
        // 옮긴 횟수 증가
        cnt++;
        return;
    }

    // (n-1)개의 원판을 i에서 temp로 j를 거쳐서 옮긴다.
    move(n - 1, i, temp, j);
    // 옮기려고 하는 1개의 원판을 i에서 j로 옮긴다.
    result.append(to_string(i) + ' ' + to_string(j) + '\n');
    cnt++;
    // (n-1)개의 원판을 temp에서 j로 i를 거쳐서 옮긴다.
    move(n - 1, temp, j, i);
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    // N개의 원판을 1에서 3으로 2를 거쳐서 옮긴다.
    move(N, 1, 3, 2);

    // 옮긴 횟수와 원판의 이동 이력 출력
    cout << cnt << '\n';
    cout << result;
}