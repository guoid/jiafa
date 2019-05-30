// 555.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	
	void setvalue(int fe, int in);
	void display();
	int getfeet();
	int getinches();
	CFeet add(CFeet & obj);
	CFeet  operator+(CFeet & obj);
};
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinches()
{
	return inches;
}
void CFeet::setvalue(int fe, int in)
{
	feet = fe + in / 12;
	inches = in % 12;
}
 
void CFeet::display()
{
	cout << feet << "英尺" << inches << "英寸" << endl;
}
CFeet CFeet::add(CFeet & obj)
{
	CFeet temp;
	temp.setvalue(feet + obj.feet, inches + obj.inches);
	return temp;
}
CFeet CFeet::operator+(CFeet&obj)
{
	CFeet temp;
	temp.setvalue(feet + obj.feet, inches + obj.inches);
	return temp;
}
int main()
{
	CFeet A, B, C;
	A.setvalue(10, 8);
	B.setvalue(4, 9);
	C = A + B;
	C.display();
    return 0;
}

