#include <iostream>
#include <algorithm>
using namespace std;

// Mean function
float Mean(int a[],int n)
{
    int sum=0;

    for(int i=0;i<n;i++)
        sum+=a[i];

    return (float)sum/n;
}

// Median function
float Median(int a[],int n)
{
    sort(a,a+n);

    if(n%2==0)
        return (a[n/2]+a[(n/2)-1])/2.0;

    else
        return a[n/2];
}

// Mode function
int Mode(int a[],int n)
{
    int mode=a[0],maxCount=0;

    for(int i=0;i<n;i++)
    {
        int count=0;

        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
        }

        if(count>maxCount)
        {
            maxCount=count;
            mode=a[i];
        }
    }

    return mode;
}

int main()
{
    int n;

    cout<<"Enter size: ";
    cin>>n;

    int a[n];

    cout<<"Enter elements:\n";

    for(int i=0;i<n;i++)
        cin>>a[i];

    // Function calls
    cout<<"Mean = "<<Mean(a,n)<<endl;
    cout<<"Median = "<<Median(a,n)<<endl;
    cout<<"Mode = "<<Mode(a,n)<<endl;

    return 0;
}