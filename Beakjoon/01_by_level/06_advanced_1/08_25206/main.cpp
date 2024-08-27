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
    cout.tie(nullptr);

    // 최종적으로 출력할 변수
    double sum_credit = 0.0;            // 학점의 합
    double sum_credit_with_grade = 0.0; // 과목별 (학점 * 과목평점)의 합

    // 입력을 저장할 변수
    string major;   // 과목명
    double credit;  // 학점
    string grade;   // 등급

    // 입력받은 과목명, 학점, 등급을 저장
    while(cin >> major >> credit >> grade)
    {
        // 등급이 P이면 학점의 합 계산에서 제외(continue)
        if(grade == "P") continue;

        // 학점의 합 계산
        sum_credit += credit;

        // 등급이 F이면 (학점 * 과목평점)이 0이므로 계산에서 제외
        if(grade == "F") continue;

        // 과목별 (학점 * 과목평점)의 합 계산
        // 1) 등급의 첫 번째 문자에 대한 계산
        if(grade[0] == 'A')
            sum_credit_with_grade += 4 * credit;
        else if(grade[0] == 'B')
            sum_credit_with_grade += 3 * credit;
        else if(grade[0] == 'C')
            sum_credit_with_grade += 2 * credit;
        else
            sum_credit_with_grade += credit;

        // 2) 등급의 두 번째 문자에 대한 계산
        if(grade[1] == '+')
            sum_credit_with_grade += 0.5 * credit;
    }

    // 결과 출력
    cout << sum_credit_with_grade / sum_credit << endl;

    return 0;
}