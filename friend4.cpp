#include <iostream>
using namespace std;

class BelahKetupat; 

class LayangLayang {
private:
    float d1, d2; 
    float s1, s2; 

public:
    void input() {
        cout << "=== Input Layang-Layang ===" << endl;
        cout << "Masukkan diagonal 1: ";
        cin >> d1;
        cout << "Masukkan diagonal 2: ";
        cin >> d2;
        cout << "Masukkan sisi 1: ";
        cin >> s1;
        cout << "Masukkan sisi 2: ";
        cin >> s2;
    }

    float luas() {
        return 0.5 * d1 * d2;
    }

    float keliling() {
        return 2 * (s1 + s2);
    }

    void output() {
        cout << "\n=== Layang-Layang ===" << endl;
        cout << "Luas: " << luas() << endl;
        cout << "Keliling: " << keliling() << endl;
    }

    friend float kelilingLayang(LayangLayang &l);
};

float kelilingLayang(LayangLayang &l) {
    return l.keliling();
}

class BelahKetupat {
private:
    float d1, d2; 
    float s;      

public:
    void input() {
        cout << "\n=== Input Belah Ketupat ===" << endl;
        cout << "Masukkan diagonal 1: ";
        cin >> d1;
        cout << "Masukkan diagonal 2: ";
        cin >> d2;
        cout << "Masukkan sisi: ";
        cin >> s;
    }

    float luas() {
        return 0.5 * d1 * d2;
    }

    float keliling() {
        return 4 * s;
    }

    void output() {
        cout << "\n=== Belah Ketupat ===" << endl;
        cout << "Luas: " << luas() << endl;
        cout << "Keliling: " << keliling() << endl;
    }

    void tampilKelilingLayang(LayangLayang &l) {
        cout << "\nKeliling Layang-Layang (akses friend): "
             << kelilingLayang(l) << endl;
    }
};

int main() {
    LayangLayang l;
    BelahKetupat b;

    l.input();
    l.output();

    b.input();
    b.output();

    b.tampilKelilingLayang(l);

    return 0;
}