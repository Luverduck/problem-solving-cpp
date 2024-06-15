#include <iostream>
#include <vector>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 10진수 N과 변환할 수의 기수 B
    int N, B;
    cin >> N >> B;

    // B진수를 역순으로 저장할 벡터
    vector<char> v;

    // 변환표
    string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // N이 0이 아닐 때까지 반복 (N을 B로 나눈 몫이 0이 될 때까지 반복)
    while(N != 0)
    {
        // N을 B로 나눈 나머지에 해당하는 값을 변환표에서 찾아 벡터에 저장
        v.push_back(digits[N % B]);
        // N을 B로 나눈 몫을 N에 재 할당
        N /= B;
    }

    // 벡터에 저장된 값을 역순으로 출력
    int length = v.size();
    for(int i = length - 1; i >= 0; --i)
        cout << v[i];
}