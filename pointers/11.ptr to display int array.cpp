#include <iostream>
using namespace std;
int main(){
	int arr[5]={1,2,3,4,5};
	int *ptr=arr;
	cout<<"Values in array: ";
	for(int i=0;i<5;i++){
		cout<<*(ptr+i)<<" ";
	}
	cout<<endl;
	cout<<"Vales of array using ptr: ";
	for (int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }
	return 0;
}
