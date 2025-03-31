#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 세 문자열 다음에 올 정수 계산
    int res;
    for(int i = 0; i < 3; ++i)
    {
        string input;
        cin >> input;
        // 입력받은 문자열이 숫자인 경우에만
        if(!isdigit(input[0])) continue;
        // 다음에 올 정수 계산
        res = stoi(input) + (3 - i);
    }

    // 세 문자열 다음에 올 정수를 조건에 따라 출력
    if(res % 3 == 0 && res % 5 == 0)
        cout << "FizzBuzz";
    else if(res % 3 == 0)
        cout << "Fizz";
    else if(res % 5 == 0)
        cout << "Buzz";
    else
        cout << res;
}