#include<iostream>
#include<algorithm> // to used swap function in program
using namespace std;

// partition of array into two parts
int partition (int arr[],int s, int e)
{
    int pindex=s;
    int pivote=arr[e];
    for(int i=s; i<e; i++)
    {
        if(arr[i]<pivote)
        {
            swap(arr[i],arr[pindex]); // swap function to sort two integers
            pindex++;
        }
    }
    swap(arr[pindex],arr[e]);
    return pindex;

}
void qS(int arr[],int s,int e)
{
    if(s<e)
    {
        int p=partition(arr,s,e);
        qS(arr,s,(p-1)); // for the left part of the array
        qS(arr,(p+1),e); // for the right part of the array
    }

}

int main()
{
    int n;
    cout<<"How many integers\n";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" integers\n"; 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    qS(arr,0,n-1);
    cout<<"After quick sort\n";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
