// Insert sort - picks a unsorted array element and place it to its correct postion in sorted array

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of array :";
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int key;
    int i, j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (key < a[j])
            {
                a[j+1] = a[j];
            }
            else
                break;
        }
        if ((j + 1) != i)
        {
            a[j + 1] = key;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}