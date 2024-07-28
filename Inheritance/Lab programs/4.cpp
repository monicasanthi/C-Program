#include <iostream>
using namespace std;
class ABC;
class XYZ{
	int x;
	public:
		void setvalue(int i){
			x=i;
		}
		friend void max(XYZ&,ABC&);
};
class ABC{
	int a;
	public:
		void setvalue(int i){
			a=i;
		}
		friend void max(XYZ&,ABC&);
};
void max(XYZ& m,ABC& n){
	if(m.x>n.a){
		cout<<"Maximum is: "<<m.x;
	}
	else{
		cout<<"Maximum is: "<<n.a;
	}
}
int main(){
	ABC abc;
	abc.setvalue(10);
	XYZ xyz;
	xyz.setvalue(05);
	max(xyz,abc);
	return 0;
}