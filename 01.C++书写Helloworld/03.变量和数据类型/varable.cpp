#include<iostream>
using namespace std;
#define PI 3.14      //不推荐

//全局变量
int number;
int main() {

	//定义变量
	int a = 1, b;
	cout << "a =" << a << endl;
	b = 10;
	cout << "b = " << b << endl;
	b = 25;
	cout << "b = " << b << endl;



	//定义一个局部变量
	int number = 1;
	cout << "number = " << number << endl;
	cout << "::number = " <<:: number << endl;


	//定义常量
	const float Pi = 3.14;
	cout << "pi = " << Pi << endl;
	cout << "PI = " << PI << endl;
	cin.get();
}