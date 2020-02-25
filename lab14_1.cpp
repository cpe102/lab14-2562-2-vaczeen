#include <iostream>
using namespace std;


int main(){
	//Write your code here.
	int 	a=5;
	string 	b="A";
	string	 &c=b;
	int  	*x=&a;
	string	*y=&b;
	int 	**z=&x;
	cout<<"a: "<<a<<"\n";
	cout<<"b: "<<b<<"\n";
	cout<<"c: "<<c<<"\n";
	cout<<"x: "<<x<<"\n";
	cout<<"y: "<<y<<"\n";
	cout<<"z: "<<z<<"\n";
	c="F";
	cout<<"\nchange c=Z \n";
	cout<<"a: "<<a<<"\n";
	cout<<"b: "<<b<<"\n";
	cout<<"c: "<<c<<"\n";
	cout<<"x: "<<x<<"\n";
	cout<<"y: "<<y<<"\n";
	cout<<"z: "<<z<<"\n";
	*y="W";
	cout<<"\nchange b=W \n";
	cout<<"a: "<<a<<"\n";
	cout<<"b: "<<b<<"\n";
	cout<<"c: "<<c<<"\n";
	cout<<"x: "<<x<<"\n";
	cout<<"y: "<<y<<"\n";
	cout<<"z: "<<z<<"\n";
	*x=6;
	cout<<"\nchange a=6 \n";
	cout<<"a: "<<a<<"\n";
	cout<<"b: "<<b<<"\n";
	cout<<"c: "<<c<<"\n";
	cout<<"x: "<<x<<"\n";
	cout<<"y: "<<y<<"\n";
	cout<<"z: "<<z<<"\n";
	**z=7;
	cout<<"\nchange a=7 \n";
	cout<<"a: "<<a<<"\n";
	cout<<"b: "<<b<<"\n";
	cout<<"c: "<<c<<"\n";
	cout<<"x: "<<x<<"\n";
	cout<<"y: "<<y<<"\n";
	cout<<"z: "<<z<<"\n";
	return 0;
}
