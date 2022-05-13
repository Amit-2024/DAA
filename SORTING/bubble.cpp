#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int n;
    cout<<"Enter the length of array"<<endl;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int s=0,comp=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            comp++;
            if(a[j]>a[j+1])
            {
                s++;
                swap(&a[j],&a[j+1]);
            }
            if(s==0)
            {
                break;
            }
        }
    }
    cout<<" "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<" "<<a[i];
    }

    cout<<endl;

    cout<<"Total Comparision are "<<comp<<endl;
    cout<<"Total Swaps are "<<s;

}
