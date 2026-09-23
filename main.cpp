#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Ecris un Chiffre: " << endl;
    cin >> x;

    cout << "Table de multiplication de " << x << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << x << " * " << i << " = " << x * i << endl;
    }

    return 0;
}