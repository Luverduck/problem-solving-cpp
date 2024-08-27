#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 배달해야 할 설탕의 무게[kg]
    int N;
    cin >> N;

    // 설탕 봉지의 수
    int count = 0;

    // 배달해야 할 설탕의 무게가 0이 될 때까지 반복
    while(N >= 0)
    {
        // 남아있는 설탕의 무게를 5[kg] 봉지만으로 배달할 수 있는 경우
        if(N % 5 == 0)
        {
            // 5[kg] 설탕 봉지의 수만큼 설탕 봉지의 수에 가산
            count += N / 5;
            cout << count;
            return 0;
        }
        // 그렇지 않을 경우
        else
        {
            // 남아있는 설탕의 무게에서 3[kg]를 뺀 후 설탕 봉지 하나를 추가
            N -= 3;
            count++;
        }
    }

    // 설탕의 무게가 5[kg] 봉지와 3[kg] 봉지로 배달할 수 없는 무게인 경우
    cout << -1; // -1 출력
}