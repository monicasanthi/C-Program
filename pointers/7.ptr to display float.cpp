#include <iostream>
using namespace std;
int main(){
	float num=20.5f;
	float *ptr=&num;
	cout<<"Value of num: "<<num<<endl;
	cout<<"Address of num: "<<ptr<<endl;
	cout<<"Value of *ptr: "<<*ptr<<endl;	
}