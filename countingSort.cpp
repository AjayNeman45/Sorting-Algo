#include<iostream>
#include<vector>
using namespace std;

void countingSort(int arr[],int n)
{
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		   max=arr[i];
	}
	int range=max+1;
	vector<int>countArray(range,0);
	int outputArray[n];
	for(int i=0;i<n;i++)
    {
    	countArray[arr[i]]++;
	}
	for(int i=1;i<range;i++)
	{
	    countArray[i]=countArray[i-1]+countArray[i];
	}
	for(int i=0;i<n;i++)
    {
    	outputArray[--countArray[arr[i]]]=arr[i];
	}
	for(int i=0;i<n;i++)
    {
        arr[i]=outputArray[i];
	}
	
}
int main()
{
	int n;
	cout<<"How many integers you want to sort?\n";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" integers\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Before counting sort\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	countingSort(arr,n);
	cout<<"After counting sort\n";
	for(int i=0;i<n;i++)
	{
	    cout<<arr[i]<<" ";
	}
}
