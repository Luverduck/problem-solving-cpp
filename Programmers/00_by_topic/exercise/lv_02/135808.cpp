#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;

    sort(score.begin(), score.end(), greater<>());

    int cnt = score.size() / m;
    for(int i = 1; i <= cnt; ++i)
        answer += score[m * i - 1] * m;

    return answer;
}