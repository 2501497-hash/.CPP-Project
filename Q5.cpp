#include <iostream>
using namespace std;

// Function to find minimum and maximum
void getExtremes(float &min, float &max, float a[], int n)
{
    min = a[0];   // assume first element is minimum
    max = a[0];   // assume first element is maximum

    for(int i = 1; i < n; i++)
    {
        if(a[i] < min)
            min = a[i];

        if(a[i] > max)
            max = a[i];
    }
}

int main()
{
    int n;
    float a[100], min, max;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    // function call
    getExtremes(min, max, a, n);

    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max << endl;

    return 0;
}