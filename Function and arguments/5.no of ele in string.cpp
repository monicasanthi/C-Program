#include<iostream>
#include<string>
using namespace std;
int countelements(const string& str){
	return str.length();
}
int main(){
	string input;
	cout<<"Enter the string: ";
	cin>> input;
	int count = countelements(input);
	cout<<"No of elements: "<<count<<endl;
	return 0;
}