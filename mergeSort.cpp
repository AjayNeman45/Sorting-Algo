#include<iostream>
using namespace std;

// merging back the elemets of the array
void merge(int arr[],int l,int m,int r)
{
	int i=l,j=m+1,k=l;
	int temp[r];
	while(i<=m && j<=r)
	{
		if(arr[i]<=arr[j])
		{
			temp[k]=arr[i];
			i++;
			k++;
		}
		else
		{
			temp[k]=arr[j];
			j++;
			k++;
		}
	}
	while(i<=m)
	{
		temp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=r)
	{
		temp[k]=arr[j];
		j++;
		k++;
	}
	for(int i=l; i<=r; i++)
	{
		arr[i]=temp[i];
	}
}

void mergeSort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2; // finding the middle element of the array
		mergeSort(arr,l,m); // for the left part of the array
		mergeSort(arr,m+1,r); // for the right part of the array
		merge(arr,l,m,r);  // calling merge function

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
	cout<<"Before merege sort\n";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	mergeSort(arr,0,n-1); // mergeSort function calling
	
	cout<<endl;
	cout<<"After merege sort\n";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
