#include<iostream>
using namespace std;
#define PI 3.14      //���Ƽ�

//ȫ�ֱ���
int number;
int main() {

	//�������
	int a = 1, b;
	cout << "a =" << a << endl;
	b = 10;
	cout << "b = " << b << endl;
	b = 25;
	cout << "b = " << b << endl;



	//����һ���ֲ�����
	int number = 1;
	cout << "number = " << number << endl;
	cout << "::number = " <<:: number << endl;


	//���峣��
	const float Pi = 3.14;
	cout << "pi = " << Pi << endl;
	cout << "PI = " << PI << endl;
	cin.get();
}