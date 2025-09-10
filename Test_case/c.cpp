#include<iostream>
#include<cmath>

using namespace std;

int f3(int x) {
    if (x > 10)
        return 2 * x;
    else if (x < 2)
        return -x;
    else
        return 2 * x;
}

int main() {
    int x;
    cin >> x;

    int ket_qua = f3(x);

    cout << "Ket qua cua f3("<< x <<"): " << ket_qua << endl;
    return 0;
}
