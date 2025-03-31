#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(string& str, char delimiter)
{
    vector<string> tokens;
    istringstream iss(str);
    string token;
    while (getline(iss, token, delimiter))
        tokens.push_back(token);
    return tokens;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string input;
    cin >> input;

    vector<string> tokens = split(input, '/');
    int K = stoi(tokens[0]);
    int D = stoi(tokens[1]);
    int A = stoi(tokens[2]);
    bool flag = K + A < D;

    cout << (D != 0 && !flag ? "gosu" : "hasu");
}