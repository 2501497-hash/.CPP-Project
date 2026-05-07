#include <iostream>
#include <cmath>
using namespace std;

// function to calculate standard deviation
double stdev(double x[], int n) {
    double sum = 0;

    // calculate mean
    for(int i = 0; i < n; i++)
        sum += x[i];

    double mean = sum / n;

    double var_sum = 0;

    // calculate variance part
    for(int i = 0; i < n; i++)
        var_sum += (x[i] - mean) * (x[i] - mean);

    double variance = var_sum / (n - 1);

    return sqrt(variance);
}

// test function
int main() {
    double arr[] = {2, 4, 4, 4, 5, 5, 7, 9};
    int n = 8;

    cout << "Standard Deviation = " << stdev(arr, n);
    return 0;
}