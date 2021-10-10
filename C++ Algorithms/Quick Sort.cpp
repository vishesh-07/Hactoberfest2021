#include<bits/stdc++.h>
using namespace std;
void inputArray(vector<int>&a,int n){
	cout<<"Enter Elements in Vector\n";
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
}
int partition(vector<int>&a,int low,int high){
	int pivot=a[low];
	int start=low;
	int end=high;
	while(start<end){
		while(a[start]<=pivot){
			start++;
		}
		while(a[end]>pivot){
			end--;
		}
		if(start<end){
			swap(a[start],a[end]);
		}
	}
	swap(a[low],a[end]);
	return end;
}
void printSortedVector(vector<int>a){
	for(auto i:a){
		cout<<i<<" ";
	}cout<<"\n";
}
void quickSort(vector<int>&a,int low,int high){
	if(low<high){
		int pivot=partition(a,low,high);
		quickSort(a,low,pivot-1);;
		quickSort(a,pivot+1,high);
	}
}
int main(){
	int n;
	cout<<"Enter Size of Vector\n";
	cin>>n;
	vector<int>a;
	inputArray(a,n);
	quickSort(a,0,n-1.
	);
	cout<<"Sorted Vector after Quick Sort is\n";
	printSortedVector(a);
  return 0;
}
