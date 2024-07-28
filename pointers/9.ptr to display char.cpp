#include <iostream>
using namespace std;
int main(){
	char letter ='S';
	char *ptr=&letter;
	cout<<"The letter is: "<<letter<<endl;
	cout<<"Address of letter: "<<(void*)ptr<<endl;
	cout<<"Letter of *ptr: "<<*ptr<<endl;	
}