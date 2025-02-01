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