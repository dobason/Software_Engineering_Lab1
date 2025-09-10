#include<iostream>
#include<cmath>

using namespace std;

int f4(int x) {
    if (log(x * x * cos(x)) < 3 * x)
        return 2 * x;
    else
        return 2 * x;
}

int main() {
    int x;
    cin >> x;

    int ket_qua = f4(x);

    cout << "Ket qua f4(" << x << "): " << ket_qua << endl;
    return 0;
}
