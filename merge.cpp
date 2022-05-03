// tc - O(nlogn)
// sc - O(n)

#include<iostream>
using namespace std;

void merge(int a[], int l, int mid, int h)
{
    int n1,n2;
    n1=mid-l+1;
    n2=h-mid;

    int La[n1], Ra[n2];

    for(int i=0; i<n1; i++)
    {
        La[i] = a[l+i];
    }
    for(int j=0; j<n2; j++)
    {
        Ra[j] = a[mid+1+j];
    }
    
    int i=0,j=0,k=l;
    
    while(i<n1 && j<n2)
    {
        if(La[i]<=Ra[j])
        {
            a[k] = La[i];
            i++;
        }
        else
        {
            a[k]=Ra[j];
            j++;
        }
        k++;
    }
    
    while(i<n1)
    {
        a[k]=La[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        a[k]=Ra[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int l, int h)
{
    if(l<h)
    {
        int mid = l+(h-l)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}

void display(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
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

    mergeSort(a,0,n-1);
    display(a,n);   
}
