//2. Write a program of to sort the array using templates
#include<iostream>
using namespace std;
template<typename T,int size>

void sortarray(T (&arr)[size])
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				T temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main()
{
	int i,j;
	int arri[5]={4,2,1,8,3};
	cout<<"\n Original Array =";
	for(i=0;i<5;i++)
	{
		cout<<arri[i]<<" ";
	}
	sortarray(arri);
	cout<<"sorted array=";
	for(i=0;i<5;i++)
	{
		cout<<arri[i]<<" ";
	}
	
	float arrd[5]={4.2,2.1,1.3,8.4,3.2};
	cout<<"\n Original Array =";
	for(i=0;i<5;i++)
	{
		cout<<arrd[i]<<" ";
	}
	sortarray(arrd);
	cout<<"sorted array=";
	for(i=0;i<5;i++)
	{
		cout<<arrd[i]<<" ";
	}
	
	char arrc[5]={'a','b','d','e','h'};
	cout<<"\n Original Array =";
	for(i=0;i<5;i++)
	{
		cout<<arrc[i]<<" ";
	}
	sortarray(arrc);
	cout<<"sorted array=";
	for(i=0;i<5;i++)
	{
		cout<<arrc[i]<<" ";
	}
}


