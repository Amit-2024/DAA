/* TC - O(nlogn)best and avg case
   TC - O(n^2) worst case

    SC - n - unsorted and for same elements
    SC - logn - sorted list
*/
#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int partition(int a[], int l, int h)
{
    int pivote = a[h];
    int index = l;
    
    for(int j=l; j<h; j++)
    { 
        if(a[j]<=pivote)
        {
            swap(a[index],a[j]);
            index++;
        }
    }
    swap(a[index],a[h]);
    return index;
    
}

void quicksort(int a[], int l, int h)
{
    if(l<h)
    {
        int p = partition(a,l,h);
        quicksort (a,l,p-1);
        quicksort(a,p+1,h);
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
   cin>>n;
   int a[n];
   cout<<"Enter the elements";
   for(int i=0; i<n; i++)
   {
       cin>>a[i];
   }
   
   quicksort(a,0,n-1);
   display(a,n);
}