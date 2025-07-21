#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int long_count = n / 4; // 그냥 이렇게 변수 하나로 퉁칠 수 있어 보이는거는 그냥 최대한 변수로 묶어버리고

    for (int i = 0; i < long_count; ++i)
    {
        cout << "long ";
    }
    cout << "int";
    return 0;
};