#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// 정렬 기준 함수
int cmp(string& a, string& b)
{
    if(a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 단어의 개수
    int N;
    cin >> N;

    // 단어를 저장할 배열
    string words[N];

    // 단어를 배열에 저장
    for(int i = 0; i < N; ++i)
        cin >> words[i];

    // 배열을 정렬 기준 함수에 따라 정렬
    sort(words, words + N, cmp);

    // 정렬된 요소를 순서대로 출력
    for(int i = 0; i < N; ++i)
    {
        // 배열의 끝일 경우 || i가 배열의 끝이 아니면서 i번째 단어와 i+1번째 단어가 같지 않을 경우
        if( i == N - 1 || (i < N - 1 && words[i] != words[i + 1]) )
            cout << words[i] << "\n"; // 단어 출력
    }
}