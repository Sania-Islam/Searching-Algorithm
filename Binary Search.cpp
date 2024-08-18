#include<bits/stdc++.h>
using namespace std;

//For searching the Key
int binarySearch(int a[], int n, int key)
{
    int low = 0, high = n;
    while(low<= high)
    {
      int mid = (low+high)/2;
      if(a[mid] == key)
        return mid;
      else if(a[mid] > key)
        high = mid-1;
      else
        low = mid+1;
    }
    return -1;
}

//Taking input and sorting the array
int main()
{
    int array[10], n, key;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    cin>>key;
    sort(array, array+n);
    cout<< "Sorted Array is:";
    cout<< endl;
    for(int i=0; i<n; i++)
    {
        cout<<array[i];cout<< endl;
    }

    int indx = binarySearch(array, n, key);
    if(indx >= 0)
    {
        cout << key << " is found in the index "<<indx;
    }
    else
    {
        cout << "Not found"<< "\n";
    }
}
