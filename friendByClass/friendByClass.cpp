#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
//类做友元案例
class Building;
class GoodGay
{
public:
	GoodGay();
	void test();
	Building* building;

};
class Building
{
	friend class GoodGay;

public:
	Building();
public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";

}
GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::test()
{
	cout << "您正在访问的是 ：" << building->m_SittingRoom << endl;
	cout << "您正在访问的是 ：" << building->m_BedRoom << endl;

}

void test01()
{
	GoodGay g1;
	g1.test();
}
int main()
{
	test01();
	system("pause");
	return 0;

}