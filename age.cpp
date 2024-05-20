#include <iostream>
using namespace std;

void age(int pd, int pm, int py, int bd, int bm, int by) {
    int d, m, y;
    int md[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    y = py - by;
    if (pm < bm) {
        y--;
        m = 12 - (bm - pm);
    } else {
        m = pm - bm;
    }

    if (pd < bd) {
        m--;
        d = md[pm - 1] - (bd - pd);
    } else {
        d = pd - bd;
    }

    cout << "Your age is: " << y << " years " << m << " months " << d << " days." << endl;
}

int main() {
    int pd, pm, py, bd, bm, by;
    cout << "Enter the present date in the format dd mm yyyy: ";
    cin >> pd >> pm >> py;
    cout << "Enter the birth date in the format dd mm yyyy: ";
    cin >> bd >> bm >> by;

    age(pd, pm, py, bd, bm, by);
    return 0;
}
