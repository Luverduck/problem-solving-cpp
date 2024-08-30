#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

// ⭐ 단어의 정렬 기준 함수
// 1. 자주 나오는 단어일수록 앞에 배치한다.
// 2. 해당 단어의 길이가 길수록 앞에 배치한다.
// 3. 알파벳 사전 순으로 앞에 있는 단어일수록 앞에 배치한다
bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    if(a.second == b.second)
    {
        if(a.first.length() == b.first.length())
            return a.first < b.first;
        return a.first.length() > b.first.length();
    }
    return a.second > b.second;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 단어의 개수 N과 외울 단어의 길이 기준 M
    int N, M;
    cin >> N >> M;

    // 단어와 그 개수를 저장할 map 생성
    unordered_map<string, int> m_word_cnt;
    for(int n = 0; n < N; ++n)
    {
        // 입력받은 단어를 저장
        string word;
        cin >> word;
        // 입력받은 단어의 길이가 외울 단어의 길이 기준 M보다 짧은 경우
        if(word.length() < M) continue; // 다음 루프로 점프
        // 그렇지 않을 경우 단어를 map에 저장
        m_word_cnt[word]++;
    }

    // map에 저장된 단어를 기준에 따라 정렬하기 위해 pair<string, int>의 vector에 복사
    vector<pair<string, int>> v_word_cnt(m_word_cnt.begin(), m_word_cnt.end());
    // 사용자 정의 정렬 함수 cmp에 따라 vector 정렬
    sort(v_word_cnt.begin(), v_word_cnt.end(), cmp);

    // vector에 저장된 pair의 요소들 중 first(단어)만 출력
    for(auto& p : v_word_cnt)
        cout << p.first << '\n';
}