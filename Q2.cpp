#include <iostream>
using namespace std;

// Function to find minimum and maximum
void getExtremes(float &min, float &max, float a[], int n)
{
    // Assume first element is min and max
    min = a[0];
    max = a[0];

    // Loop through array
    for(int i = 1; i < n; i++)
    {
        // Check minimum
        if(a[i] < min)
            min = a[i];

        // Check maximum
        if(a[i] > max)
            max = a[i];
    }
}

int main()
{
    int n;

    // Input array size
    cout << "Enter size: ";
    cin >> n;

    float a[n];

    // Input array elements
    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++)
        cin >> a[i];

    float min, max;

    // Function call
    getExtremes(min, max, a, n);

    // Display results
    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max << endl;

    return 0;
}