/*실수의 지수 표현을 하는 클래스 Exp를 헤더파일과 cpp파일로 분리하여 작성*/

#include<iostream>
#include "Exp.h"
using namespace std;


int main() {
	
	Exp a(3,2);
	Exp b(9);
	Exp c;

	cout << a.getValue()<<' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a의 베이스" << a.getBase() << ',' << "지수 " << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;
}
