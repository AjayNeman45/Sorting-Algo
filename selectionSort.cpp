#include<iostream>
#include<algorithm> // to used swap function in program
using namespace std;

void selectionSort(int arr[],int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]>arr[j])
			{
				swap(arr[i],arr[j]);  // swap is an inbuild function of algorithm header file used to sort the two elements
			}
		}
	}
}

int main()
{
	int n;
	cout<<"How many integers?\n";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" integers\n";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Before selection sort\n";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	selectionSort(arr,n);
	cout<<endl;
	cout<<"After selection sort\n";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
