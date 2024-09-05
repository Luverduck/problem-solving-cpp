#include <iostream>

using namespace std;

// 문자열의 index를 row, 해당 index의 문자 번호를 col로 하는 누적합 배열
// ex) idx_char[idx][ch]에 대하여
//     idx는 문자열의 index,
//     ch는 문자에 대응하는 0 ~ 25 사이의 번호 ( 0('a') ~ 25('z') )
int idx_char[200001][26];

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 문자열 S와 질문 수 q
    string S;
    int q;
    cin >> S >> q;

    // 문자열에 대한 누적합 계산
    char ch;
    int str_length = S.size();
    for(int i = 0; i < str_length; ++i)
    {
        // 문자열의 i번째 문자에 대한 등장 횟수 가산
        ch = S[i] - 'a';
        idx_char[i + 1][ch]++;
        // 누적합 배열의 i번째 행 배열에 저장된 값을 (i+1)번째 행 배열에 누적
        for(int j = 0; j < 26; ++j)
        {
            // i번째 행 배열의 요소들 중 값이 0인 요소는 건너뛴다.
            if(idx_char[i][j] == 0) continue;
            // 그 외 요소는 (i+1)번째 행 배열에 값을 누적한다.
            idx_char[i + 1][j] += idx_char[i][j];
        }
    }

    // q개의 질문에 대하여 문자 a가 [l, r] 구간에 몇 번 나오는지에 대한 답 출력
    char a;
    int l, r;
    for(int i = 0; i < q; ++i)
    {
        cin >> a >> l >> r;
        ch = a - 'a';
        // l이 0이 아닐 경우 [r,l]에 대한 구간 합 출력, 0일 경우 [r, 0]이므로 누적합의 r번째 요소 출력
        cout << (l != 0 ? idx_char[r + 1][ch] - idx_char[l][ch] : idx_char[r + 1][ch]) << '\n';
    }
}