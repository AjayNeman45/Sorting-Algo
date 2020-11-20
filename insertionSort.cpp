#include<iostream>
using namespace std;

void insertionSort(int arr[],int n)
{
	int j,temp;
	for(int i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
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
	cout<<"Before insertion sort\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	insertionSort(arr,n);
	cout<<"After insertion sort\n";
	for(int i=0;i<n;i++)
	{
	    cout<<arr[i]<<" ";
	}
}
