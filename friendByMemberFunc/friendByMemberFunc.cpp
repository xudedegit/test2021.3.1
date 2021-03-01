#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>

using namespace std;
// 成员函数做友元案例
class Building;
class GoodGay
{

public:
	GoodGay();
	Building* building;
	void visit1();
	void visit2();
};
class Building
{
	friend void GoodGay::visit1();
	//friend void GoodGay::visit2();
public:
	Building();
public:
	string m_Sittingroom;
private:
	string m_Bedroom;
};
Building::Building()
{
	this->m_Sittingroom = "客厅";
	this->m_Bedroom = "卧室";
}
GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::visit1()      //visit1成员函数可以访问其他类的私有成员
{
	cout << "visit1正在访问的是：" << building->m_Sittingroom << endl;
	cout << "visit1正在访问的是：" << building->m_Bedroom << endl;
}
void GoodGay::visit2()      //visit2成员函数不可以访问其他类的私有成员
{

	cout << "visit2正在访问的是：" << building->m_Sittingroom << endl;
	//cout << "visit2正在访问的是：" << building->m_Bedroom << endl;
}
void test01()
{
	GoodGay g1;
	g1.visit1();
	g1.visit2();

}
int main()
{

	test01();
	system("pause");
	return 0;

}