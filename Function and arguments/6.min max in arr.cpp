#include <iostream>
using namespace std;
void findminmax(int arr[],int n,int &min, int&max){
	min=max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<min)min=arr[i];
		if(arr[i]>max)max=arr[i];
	}
}
int main(){
	int n;
	cout<<"Enter no of elements: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements: ";
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	int min,max;
	findminmax(arr,n,min,max);
	cout<<"Minimum: "<<min;
	cout<<"\nMaximum: "<<max;
	return 0;
}