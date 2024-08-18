
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int n, int key)
{
    int low =0, high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid] == key)
            return mid+1;
        else if(a[mid] > key)
            high = mid -1;
        else
            low = mid +1;
    }
    return  -1;
}
int main()
{
    int n, q, key;
    cin>>n>>q;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    sort(ar, ar+n);
    for(int j=0; j<q; j++)
    {
        cin>>key;
        int indx = binarySearch( ar, n, key);
        cout << indx << "\n";
    }
}
