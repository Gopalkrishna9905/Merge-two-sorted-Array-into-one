#include<iostream>
using namespace std;

int mergeArray(int arr1[], int n , int arr2[], int m , int arr3[])
{
	int i=0;
	int k=0;
	int j=0;
	while(i<n && j< m)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k++]=arr1[i++];
			
		}
		else{
			arr3[k++]=arr2[j++];
		
		}
	}
	while(i<n)
	{
		arr3[k++]=arr1[i++];
		
	}
	
	while(j<n)
	{
		arr3[k++]=arr2[j++];
	
	}
}


void printArray(int arr[],int n)
{
	for(int i =0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr1[7]={1,2,6,8,13,15,19};
	int arr2[5]={3,5,7,11,14};
	int arr3[12]={0};
	mergeArray(arr1,7,arr2,5,arr3);
	printArray(arr3,12);
	
}
