#include <iostream>
#include <cmath>

using namespace std;

int f1(int x) {
    if (x > 10)
        return 2 * x;
    else
        return -x;
}

int main() {
    int x;
    cin >> x;

    int ket_qua = f1(x);

    cout << "Ket qua cua f1("<< x <<"): " << ket_qua << endl;

    return 0;
}