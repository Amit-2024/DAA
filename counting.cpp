#include<iostream>
using namespace std;

void counting(int a[],int n)
{
    int b[n];

    int largest=a[0];

    for(int i=0; i<n; i++)
    {
        if(a[i]>largest)
        largest = a[i];
    }

    int count[largest+1]={0};

    for(int i=0; i<n; i++)
    {
        ++count[a[i]];
    }

    for(int i=1; i<=largest; i++)
    {
        count[i] = count[i]+count[i-1];
    }

    for(int i=n-1; i>=0; i--)
    {
        b[--count[a[i]]] = a[i];
    }

    for(int i=0 ; i<n ; i++)
    {
        a[i]=b[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

}

int main()
{
    int n;
    cin>>n;
    int a[n];

    cout<<"Enter the elements in array ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    counting(a,n);
}