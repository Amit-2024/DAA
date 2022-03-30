#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int find_min(int a[], int start, int end, int &comp)
{   
    int x=start;
    for(int i=start; i<=end; i++)
    {
        comp++;
        if(a[i]<a[x])
        x=i;
    }
    return x;
}

void selection(int a[], int n)
{
    int start=0,end=n-1;
    int min_index,comp=0,s=0;
    while(start<end)
    {
        min_index=find_min(a,start,end,comp);
        if(start!=min_index)
        {
            swap(&a[start],&a[min_index]);
            s+=2;
        }
        start++;
    }
        for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Total comparisons are "<<comp<<endl;
    cout<<"Total swaps are "<<s<<endl;
}

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
    selection(a,n);
}