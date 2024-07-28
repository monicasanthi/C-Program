#include <iostream>
using namespace std;
int main(){
	int num=20;
	int *ptr=&num;
	cout<<"Value of num: "<<num<<endl;
	cout<<"Address of num: "<<ptr<<endl;
	cout<<"Value of *ptr: "<<*ptr<<endl;	
}