#include <iostream>
using namespace std;

int main(){
	int a = 5;
	char b = 'A';
	char &c = b;
	void *x = &a;
	void *y = &b;
	void **z = &x;
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << '\n';
	cout << &a << " " << y << " " << y << " " << &x << " " << &y << " " << &z << '\n';
	c ='F';
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << '\n';
	c = 'W';
    cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << '\n';
    a = 6;
    cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << '\n';
	a = 7;
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << '\n';
	return 0;
}
