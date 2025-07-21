#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sum = 0;
    // sum은 어디서든 사용해야 하니까 전역변수로 선언을 해야한다

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << sum << "\n"; // sum을 cout할 때는 for문 밖에서 한 번에 받아야한다
    return 0;
}