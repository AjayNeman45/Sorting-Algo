#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n)
{
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<n-j; i++)
		{
			if(arr[i]>arr[i+1])
			{
				// code to swap two integers
				int temp=arr[i+1];   
				arr[i+1]=arr[i];  
				arr[i]=temp;   
				// another way to swap is to directly used swap function like swap(arr[i],arr[i+1)     
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
	cout<<"Enter "<<n<<" inegers\n";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Before bubble sort\n";
	 for(int k=0; k<n; k++)
	{
		cout<<arr[k]<<" ";
	}
	cout<<endl;
	
    bubbleSort(arr,n); // calling swap function
    
	cout<<"After bubble sort\n";
	for(int k=0; k<n; k++)
	{
		cout<<arr[k]<<" ";
	}
}
