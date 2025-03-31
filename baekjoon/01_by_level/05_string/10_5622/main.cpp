#include <iostream>
#include <string>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 입력받은 문자열 저장
    string str;
    cin >> str;

    // 문자별 걸리는 시간
    int time_dial[26] = {
        3, 3, 3,         // A ~ C
        4, 4, 4,         // D ~ F
        5, 5, 5,         // G ~ I
        6, 6, 6,         // J ~ L
        7, 7, 7,         // M ~ O
        8, 8, 8, 8,      // P ~ S (4개)
        9, 9, 9,         // T ~ V
        10, 10, 10, 10   // W ~ Z (4개)
    };

    // 문자열을 순회하며 총 걸리는 시간 계산
    int sec = 0;
    for(char c : str)
        sec += time_dial[(c - 'A')];

    cout << sec;
}