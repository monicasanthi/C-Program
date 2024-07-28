#include<iostream>
using namespace std;
int main(){
	string s="Monica";
	string *ptr=&s;
	cout<<"The String is: "<<s<<endl;
	cout<<"Address of string: "<<ptr<<endl;
	cout<<"String in *ptr is: "<<*ptr<<endl;
	return 0;
}