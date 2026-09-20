#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int N = 200;
    const double A = 1.0;
    const double f = 2.0;
    const double Fs = 50.0;

    double x[N], noisy[N], y[N];
    srand(time(0));

    for (int n = 0; n < N; n++) {
        double t = n / Fs;
        double noise = ((rand() % 100) / 100.0 - 0.5) * 0.5;
        x[n] = A * sin(2 * M_PI * f * t);
        noisy[n] = x[n] + noise;
    }

    for (int n = 0; n < N; n++) {
        if (n < 2)
            y[n] = noisy[n];
        else
            y[n] = (noisy[n] + noisy[n - 1] + noisy[n - 2]) / 3.0;
    }

    ofstream file("signal.csv");
    file << "n;original;noisy;filtered\n";
    for (int n = 0; n < N; n++) {
        file << n << ";" << x[n] << ";" << noisy[n] << ";" << y[n] << "\n";
    }
    file.close();

    cout << "Da tao file signal.csv - Mo bang Excel de xem do thi!\n";
    return 0;
}


